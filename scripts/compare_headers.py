#!/usr/bin/env python3
"""Compare game headers (include/nitro/) with SDK headers (lib/include/nitro/) to find duplicates."""
import os
import difflib

game_dir = "include/nitro"
sdk_dir = "lib/include/nitro"

# Find all .h files in game nitro/
game_headers = set()
for root, dirs, files in os.walk(game_dir):
    for f in files:
        if f.endswith('.h'):
            rel = os.path.relpath(os.path.join(root, f), game_dir)
            game_headers.add(rel)

# Find all .h files in SDK nitro/
sdk_headers = set()
for root, dirs, files in os.walk(sdk_dir):
    for f in files:
        if f.endswith('.h'):
            rel = os.path.relpath(os.path.join(root, f), sdk_dir)
            sdk_headers.add(rel)

# Find common headers
common = sorted(game_headers & sdk_headers)
only_game = sorted(game_headers - sdk_headers)
only_sdk = sorted(sdk_headers - game_headers)

print(f"Game-only headers: {len(only_game)}")
print(f"SDK-only headers: {len(only_sdk)}")
print(f"Common headers: {len(common)}")
print()

# For each common header, check if they are identical
identical = []
different = []
for h in common:
    game_path = os.path.join(game_dir, h)
    sdk_path = os.path.join(sdk_dir, h)
    try:
        with open(game_path, encoding='utf-8', errors='replace') as f:
            game_content = f.read()
        with open(sdk_path, encoding='utf-8', errors='replace') as f:
            sdk_content = f.read()
    except:
        continue
    if game_content == sdk_content:
        identical.append(h)
    else:
        different.append(h)

print(f"Identical (can redirect): {len(identical)}")
for h in identical:
    print(f"  {h}")

print()
print(f"Different (need review): {len(different)}")
for h in different:
    print(f"  {h}")
