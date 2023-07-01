N, M, K = map(int, input().split())

ans = 0
mn = int(1e10)

for i in range(K):
    x, y = map(int, input().split())
    val = abs(x - 1) + abs(y - M)
    if val < mn:
        mn = val
        ans = i+1

print(ans)