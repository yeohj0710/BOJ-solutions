import sys

N = int(input())

for i in range(-N, N+1):
    if i == 0 or N % i != 0:
        continue
    for j in range(-(N+2), N+3):
        if j == 0 or -(N+2) % j != 0:
            continue
        a = i
        b = j
        c = N // i
        d = -(N+2) // j

        if a * d + b * c == N + 1:
            print(a, b, c, d)
            sys.exit()

print(-1)
