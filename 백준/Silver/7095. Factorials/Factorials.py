from math import *

N = int(input())

v = []
i = 1
x = 1

while True:
    if int(log10(x)) + 1 > N:
        break

    x *= i

    if int(log10(x)) + 1 == N:
        v.append(i)

    i += 1

if len(v) == 0:
    print("NO")
else:
    print(len(v))

    for i in range(len(v)):
        print(v[i])
