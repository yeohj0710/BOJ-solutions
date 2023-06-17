N = int(input())
arr = map(int, input().split())
x = int(input())
ans = 0

for ai in arr:
    if ai == x:
        ans += 1

print(ans)