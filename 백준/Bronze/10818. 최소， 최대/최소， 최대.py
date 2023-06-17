import sys

N = int(input())
arr = map(int, input().split())
mn = sys.maxsize
mx = -sys.maxsize

for ai in arr:
    if ai < mn:
        mn = ai
    if ai > mx:
        mx = ai

print(mn, mx)