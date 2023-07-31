from math import *

N = int(input())

fac = 1

for i in range(1, N+1):
    fac *= i

p = 0

for i in range(1, N+1):
    p += fac // i

q = fac

g = gcd(p, q)

print(p // g)
print(q // g)
