N = int(input())

N += 1

fac = [1]
x = 1

for i in range(1, N * 2 + 1):
    x *= i
    fac.append(x)

print(fac[N * 2] // (fac[N] * fac[N] * (N + 1)))
