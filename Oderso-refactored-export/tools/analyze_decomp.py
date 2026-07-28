#!/usr/bin/env python3
"""Analyze ghidra_decompiled_1.26.3X.c to identify Oderso-specific functions."""
import os
import re
import json
from collections import defaultdict

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DECOMP = os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c')
OUT_DIR = os.path.join(BASE, 'tools')

# Blacklist: standard-library / CRT / MSVC / compiler generated symbol prefixes
STD_PREFIXES = {
    's_avx', 's_base', 's_fma', 's_leap_year', 's_alnum', 's_ansi_if_required',
    's_copy_to_tzname', 's_iostream_stream_error', 's_invalid_iterator',
    's_namespace', 's_std', 's_double', 's_bias', 's_true_literal', 's_false_literal',
    's_per_channel', 's_alpha', 's_32_bit_rle_rgbe', 's_FORMAT_32_bit_rl', 's_XXXX_PNG_chunk_not_known',
    's_January', 's_Sunday', 's_Common', 's_null', 's_4_', 's_0000000000000000_',
    's_callback_0', 's_t', 's_i', 's_FuncInfo', 's_index', 's_float',
    's_win_core_datetime_l1_1_1',
    # patterns below match strings in standard runtime libraries
    's___________________', 's_0123456789abcdefghijklmnopqrstuv', 's_device_or_resource_busy',
}

WIN_APIS = re.compile(
    r'\b(' + '|'.join(re.escape(x) for x in [
        'LoadLibraryA', 'LoadLibraryW', 'LoadLibraryExA', 'LoadLibraryExW',
        'GetProcAddress', 'InternetOpenA', 'InternetOpenW', 'InternetOpenUrlA',
        'InternetOpenUrlW', 'InternetReadFile', 'HttpQueryInfoA', 'HttpQueryInfoW',
        'InternetCloseHandle', 'URLDownloadToFileA', 'URLDownloadToFileW',
        'WinHttpOpen', 'WinHttpConnect', 'WinHttpOpenRequest', 'WinHttpSendRequest',
        'WinHttpReceiveResponse', 'WinHttpQueryDataAvailable', 'WinHttpReadData',
        'CreateDXGIFactory', 'CreateDXGIFactory1', 'D3D11CreateDevice',
        'D3D11CreateDeviceAndSwapChain', 'RegisterRawInputDevices', 'GetRawInputData',
        'SetWindowsHookExA', 'SetWindowsHookExW', 'CallNextHookEx', 'UnhookWindowsHookEx',
        'CreateWindowExA', 'CreateWindowExW', 'GetClientRect', 'ClientToScreen',
        'ScreenToClient', 'GetCursorPos', 'SetCursorPos', 'mouse_event', 'keybd_event',
        'SendInput', 'BitBlt', 'SetDIBitsToDevice', 'GetDC', 'ReleaseDC',
        'IsDebuggerPresent', 'CheckRemoteDebuggerPresent', 'OutputDebugStringA',
        'GetVersionExA', 'GetFileVersionInfoA', 'GetFileVersionInfoSizeA',
        'CreateFileA', 'CreateFileW', 'ReadFile', 'WriteFile', 'CloseHandle',
        'CreateProcessA', 'CreateProcessW', 'OpenProcess', 'VirtualAlloc', 'VirtualProtect',
        'CreateThread', 'CreateRemoteThread', 'NtCreateThreadEx', 'NtQueryInformationProcess',
    ]) + r')\b'
)

def extract_references(text):
    func_calls = sorted(set(re.findall(r'func_0x[0-9a-fA-F]+', text)))
    s_symbols = sorted(set(re.findall(r's_[A-Za-z0-9_]+', text)))
    dat_refs = sorted(set(re.findall(r'(?:_)?DAT_180[0-9a-fA-F]{4,}', text)))
    unk_refs = sorted(set(re.findall(r'_?UNK_180[0-9a-fA-F]{4,}', text)))
    win_apis = sorted(set(WIN_APIS.findall(text)))
    tls_count = text.count('ThreadLocalStoragePointer')
    xor_count = text.count(' ^ 0x')
    return {
        'func_calls': func_calls,
        's_symbols': s_symbols,
        'dat_refs': dat_refs,
        'unk_refs': unk_refs,
        'win_apis': win_apis,
        'tls_count': tls_count,
        'xor_count': xor_count,
    }

def is_odero_symbol(sym):
    for p in STD_PREFIXES:
        if sym == p or sym.startswith(p + '_'):
            return True
    return False

def score_function(refs):
    s = 0
    # Interesting strings
    for sym in refs['s_symbols']:
        if not is_odero_symbol(sym):
            s += 10
    # Windows API usage
    s += len(refs['win_apis']) * 5
    # TLS string obfuscation pattern
    if refs['tls_count'] and refs['xor_count']:
        s += refs['tls_count'] + refs['xor_count']
    # DAT references (potential strings/data)
    s += min(len(refs['dat_refs']), 50) * 0.5
    return s

def main():
    if not os.path.exists(DECOMP):
        print('Decompiled file not found:', DECOMP)
        return

    print('Parsing', DECOMP, '...')
    with open(DECOMP, 'r', encoding='utf-8', errors='replace') as f:
        content = f.read()

    blocks = re.split(r'\n// Function:\s*', content)
    summaries = {}
    print('Analyzing', len(blocks)-1, 'function blocks')
    for i, block in enumerate(blocks[1:], 1):
        lines = block.split('\n', 1)
        func_name = lines[0].strip()
        body = lines[1] if len(lines) > 1 else ''
        refs = extract_references(body)
        score = score_function(refs)
        summaries[func_name] = {'score': score, **refs}
        if i % 2000 == 0:
            print('processed', i)

    # Save full JSON summary
    json_path = os.path.join(OUT_DIR, 'function_summary.json')
    with open(json_path, 'w', encoding='utf-8') as f:
        json.dump(summaries, f, indent=2)
    print('Wrote', json_path)

    # Write top candidates
    top = sorted(summaries.items(), key=lambda kv: kv[1]['score'], reverse=True)
    top_path = os.path.join(OUT_DIR, 'top_candidates.txt')
    with open(top_path, 'w', encoding='utf-8') as f:
        f.write(f'# Top {min(200, len(top))} Oderso-specific candidates\n')
        for func, data in top[:200]:
            f.write(f'\n{func}  score={data["score"]} tls={data["tls_count"]} xor={data["xor_count"]}\n')
            f.write(f'  s_symbols: {data["s_symbols"]}\n')
            f.write(f'  win_apis: {data["win_apis"]}\n')
            f.write(f'  dat_refs: {data["dat_refs"][:30]}\n')
            f.write(f'  calls: {data["func_calls"][:20]}\n')
    print('Wrote', top_path)

if __name__ == '__main__':
    main()
