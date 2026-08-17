import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.DecompiledFunction;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSpace;
import ghidra.program.model.symbol.SourceType;
import ghidra.util.exception.InvalidInputException;
import ghidra.util.exception.DuplicateNameException;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;

public class RetryFailedFunctions extends GhidraScript {

    @Override
    public void run() throws Exception {
        String failedListPath = getScriptArgs().length > 0 ? getScriptArgs()[0]
                : "/tmp/failed_funcs.txt";
        String outPath = getScriptArgs().length > 1 ? getScriptArgs()[1]
                : "/Users/tl/Desktop/MCBE/Clients/Oderso/ghidra_decompiled_1.26.3X_retry.c";

        List<String> names = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(failedListPath, StandardCharsets.UTF_8))) {
            String line;
            while ((line = br.readLine()) != null) {
                line = line.trim();
                if (!line.isEmpty()) {
                    names.add(line);
                }
            }
        } catch (IOException ioe) {
            println("ERROR reading failed list: " + ioe.getMessage());
            return;
        }

        AddressSpace space = currentProgram.getAddressFactory().getDefaultAddressSpace();

        DecompInterface decomp = new DecompInterface();
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(true);
        decomp.setSimplificationStyle("decompile");
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(300);
        opts.setDefaultTimeout(60);
        decomp.setOptions(opts);

        if (!decomp.openProgram(currentProgram)) {
            println("ERROR: DecompInterface failed to open program");
            return;
        }

        long success = 0;
        long failed = 0;
        long created = 0;
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(outPath, StandardCharsets.UTF_8))) {
            for (int i = 0; i < names.size(); i++) {
                if (monitor.isCancelled()) {
                    break;
                }
                String name = names.get(i);
                Function f = null;
                try {
                    String hex = name.startsWith("func_0x") ? name.substring(7) : name;
                    long offset = Long.parseUnsignedLong(hex, 16);
                    Address addr = space.getAddress(offset);
                    f = getFunctionAt(addr);
                    if (f == null) {
                        disassemble(addr);
                        f = createFunction(addr, name);
                        if (f == null) {
                            throw new Exception("createFunction returned null");
                        }
                        created++;
                    } else if (!name.equals(f.getName())) {
                        try {
                            f.getSymbol().setName(name, SourceType.USER_DEFINED);
                        } catch (InvalidInputException | DuplicateNameException e) {
                            // keep existing name
                        }
                    }
                } catch (Exception e) {
                    failed++;
                    bw.write("// Function: " + name);
                    bw.newLine();
                    bw.write("// SETUP_ERROR: " + e.getMessage());
                    bw.newLine();
                    bw.newLine();
                    continue;
                }

                try {
                    DecompileResults dr = decomp.decompileFunction(f, 600, monitor);
                    DecompiledFunction df = dr.getDecompiledFunction();
                    bw.write("// Function: " + name);
                    bw.newLine();
                    if (df != null && df.getC() != null) {
                        bw.write(df.getC());
                        success++;
                    } else {
                        String err = dr.getErrorMessage();
                        bw.write("// DECOMPILE_ERROR: " + (err != null ? err : "unknown"));
                        failed++;
                    }
                    bw.newLine();
                    bw.newLine();
                } catch (Exception e) {
                    failed++;
                    bw.write("// Function: " + name);
                    bw.newLine();
                    bw.write("// EXCEPTION: " + e.getMessage());
                    bw.newLine();
                    bw.newLine();
                }

                if ((i + 1) % 10 == 0) {
                    bw.flush();
                    println("Retry " + (i + 1) + "/" + names.size() + " (success=" + success + ", failed=" + failed + ")");
                }
            }
        } catch (IOException ioe) {
            println("ERROR writing retry output: " + ioe.getMessage());
        } finally {
            decomp.dispose();
        }

        println("Retry finished. total=" + names.size() + " success=" + success + " failed=" + failed + " created=" + created);
        println("Retry output: " + outPath);
    }
}
