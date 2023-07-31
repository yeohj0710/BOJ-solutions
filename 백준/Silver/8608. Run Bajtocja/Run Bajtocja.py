from math import *

N = int(input())
v = [0] * N

for i in range(N):
    v[i] = int(input())

x = v[0]

for i in range(1, N):
    x = x * v[i] // gcd(x, v[i])

for i in range(N):
    print(x // v[i])
