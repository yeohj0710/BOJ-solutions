from math import *

N = int(input())
v = list(map(int, input().split()))
a = 1
for i in range(N):
    a *= v[i]

M = int(input())
u = list(map(int, input().split()))
b = 1
for i in range(M):
    b *= u[i]

s = str(gcd(a, b))

print(s[-9:])
