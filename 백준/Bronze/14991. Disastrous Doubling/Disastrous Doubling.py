from sys import *

N = int(input())
v = list(map(int, input().split()))

cur = 1

for i in range(len(v)):
    cur *= 2

    if v[i] > cur:
        print("error")
        exit()

    cur -= v[i]

cur %= int(1e9 + 7)

print(cur)
