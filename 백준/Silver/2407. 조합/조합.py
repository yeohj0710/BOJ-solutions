N, M = map(int, input().split())

M = min(M, N-M)

ans = 1

for i in range(1, M+1):
    ans *= N
    ans //= i
    N -= 1

print(ans)
