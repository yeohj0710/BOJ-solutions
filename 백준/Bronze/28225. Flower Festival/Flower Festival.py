N, M = map(int, input().split())

ans = 0
mn = int(1e10)

for i in range(N):
    a, b = map(int, input().split())
    if (M - a) / b < mn:
        mn = (M - a) / b
        ans = i + 1

print(ans)