import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.DecompiledFunction;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.address.Address;
import ghidra.program.model.symbol.SourceType;
import ghidra.util.exception.InvalidInputException;
import ghidra.util.exception.DuplicateNameException;

import java.io.BufferedWriter;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;

public class DecompileAllWithDataPointers extends GhidraScript {

    @Override
    public void run() throws Exception {
        MemoryBlock text = getMemoryBlock(".text");
        if (text == null) {
            println("ERROR: .text section not found");
            return;
        }

        String outPath;
        if (getScriptArgs().length > 0) {
            outPath = getScriptArgs()[0];
        } else {
            outPath = "/Users/tl/Desktop/MCBE/Clients/Oderso/ghidra_decompiled_1.26.3X_new.c";
        }

        Address textStart = text.getStart();
        Address textEnd = text.getEnd();
        int pointerSize = currentProgram.getDefaultPointerSize();

        // Step 1: create functions from code pointers stored in .rdata and .data
        long created = 0;
        long skipped = 0;
        long scanned = 0;
        MemoryBlock[] blocks = getMemoryBlocks();
        for (MemoryBlock mb : blocks) {
            if (mb == null || !mb.isInitialized()) {
                continue;
            }
            String name = mb.getName();
            if (name == null) {
                continue;
            }
            if (!name.equals(".rdata") && !name.equals(".data")) {
                continue;
            }

            long size = mb.getSize();
            println("Scanning section " + name + " (" + size + " bytes) for code pointers...");
            for (long offset = 0; offset + pointerSize <= size; offset += pointerSize) {
                if (monitor.isCancelled()) {
                    break;
                }
                scanned++;
                Address addr = mb.getStart().add(offset);
                long raw;
                try {
                    if (pointerSize == 8) {
                        raw = getLong(addr);
                    } else if (pointerSize == 4) {
                        raw = ((long) getInt(addr)) & 0xffffffffL;
                    } else {
                        continue;
                    }
                } catch (Exception e) {
                    skipped++;
                    continue;
                }

                Address target = toAddr(raw);
                if (target == null || target.compareTo(textStart) < 0 || target.compareTo(textEnd) > 0) {
                    continue;
                }

                // Already a known function (or inside one)?
                if (getFunctionContaining(target) != null) {
                    continue;
                }

                try {
                    disassemble(target);
                    Function f = createFunction(target, null);
                    if (f != null) {
                        created++;
                    } else {
                        skipped++;
                    }
                } catch (Exception e) {
                    skipped++;
                }
            }
        }
        println("Scanned " + scanned + " pointers, created " + created + " new functions, skipped/" +
                "failed " + skipped + " from .rdata/.data code pointers.");

        // Step 2: (lightweight) re-analyze new code so the decompiler sees fresh functions
        try {
            analyzeChanges(currentProgram);
            println("Re-analyzed changes.");
        } catch (Exception e) {
            println("analyzeChanges failed (continuing anyway): " + e.getMessage());
        }

        // Step 3: normalise function names to func_0x<address>
        List<Function> allFuncs = new ArrayList<>();
        FunctionIterator iter = currentProgram.getFunctionManager().getFunctions(true);
        while (iter.hasNext()) {
            Function f = iter.next();
            if (f.isExternal()) {
                continue;
            }
            allFuncs.add(f);
        }

        for (Function f : allFuncs) {
            if (monitor.isCancelled()) {
                break;
            }
            Address entry = f.getEntryPoint();
            String newName = "func_0x" + Long.toHexString(entry.getOffset());
            if (!newName.equals(f.getName())) {
                try {
                    f.getSymbol().setName(newName, SourceType.USER_DEFINED);
                } catch (InvalidInputException | DuplicateNameException e) {
                    // leave the original name
                }
            }
        }

        // Step 4: decompile every function to a single C file
        DecompInterface decomp = new DecompInterface();
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(true);
        decomp.setSimplificationStyle("decompile");
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(300);
        opts.setDefaultTimeout(120);
        decomp.setOptions(opts);
        if (!decomp.openProgram(currentProgram)) {
            println("ERROR: DecompInterface failed to open program");
            return;
        }

        long total = 0;
        long success = 0;
        long failed = 0;
        try (BufferedWriter bw = Files.newBufferedWriter(Paths.get(outPath), StandardCharsets.UTF_8)) {
            for (Function f : allFuncs) {
                if (monitor.isCancelled()) {
                    break;
                }
                total++;
                try {
                    DecompileResults dr = decomp.decompileFunction(f, 120, monitor);
                    DecompiledFunction df = dr.getDecompiledFunction();
                    bw.write("// Function: " + f.getName());
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
                    bw.write("// Function: " + f.getName());
                    bw.newLine();
                    bw.write("// EXCEPTION: " + e.getMessage());
                    bw.newLine();
                    bw.newLine();
                }
                if (total % 500 == 0) {
                    bw.flush();
                    println("Decompiled " + total + "/" + allFuncs.size() + " functions...");
                }
            }
        } catch (IOException ioe) {
            println("ERROR writing output: " + ioe.getMessage());
        } finally {
            decomp.dispose();
        }

        println("Finished. Total=" + total + " Success=" + success + " Failed=" + failed);
        println("Output: " + outPath);
    }
}
