import sys

N = int(input())

x = []
y = []

for i in range(-N, N+1):
    if i == 0 or N % i != 0:
        continue
    x.append([i, N // i])


for i in range(-(N + 2), N + 3):
    if i == 0 or -(N + 2) % i != 0:
        continue
    y.append([i, -(N+2) // i])

for i in range(len(x)):
    for j in range(len(y)):
        a = x[i][0]
        b = y[j][0]
        c = x[i][1]
        d = y[j][1]

        if a*d + b*c == N + 1:
            print(a, b, c, d)
            sys.exit()

print(-1)
