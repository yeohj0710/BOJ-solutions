def hanoi(n, s, t, d):
    if n == 1:
        print(s, d)
        return

    hanoi(n-1, s, d, t)
    print(s, d)
    hanoi(n-1, t, s, d)


N = int(input())

print((2 ** N) - 1)

if N <= 20:
    hanoi(N, 1, 2, 3)
