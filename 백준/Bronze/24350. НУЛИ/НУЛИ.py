N, M = map(int, input().split())

M = min(M, N-M)

val = 1

for i in range(1, M+1):
    val *= N
    val //= i
    N -= 1

s = str(val)
ans = 0

for i in range(len(s)):
    if s[i] == '0':
        ans += 1

print(ans)
