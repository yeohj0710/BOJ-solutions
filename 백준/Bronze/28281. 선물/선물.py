N, M = map(int, input().split())
a = list(map(int, input().split()))

ans = int(1e10)

for i in range(1, len(a)):
    ans = min(ans, (a[i-1] + a[i]) * M)

print(ans)