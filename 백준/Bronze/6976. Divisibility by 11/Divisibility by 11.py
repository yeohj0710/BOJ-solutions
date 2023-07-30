T = int(input())

for _ in range(T):
    N = int(input())
    M = N

    print(N)

    while N >= 100:
        x = N % 10
        N //= 10
        N -= x
        print(N)

    if N % 11 == 0:
        print(f"The number {M} is divisible by 11.")
    else:
        print(f"The number {M} is not divisible by 11.")

    print()
