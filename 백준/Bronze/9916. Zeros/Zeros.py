N = int(input())

fac = 1
for i in range(1, N+1):
    fac *= i

fac = str(fac)

ans = 0

for i in fac:
    if i == '0':
        ans += 1

print(ans)