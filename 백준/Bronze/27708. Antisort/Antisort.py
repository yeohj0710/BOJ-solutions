T = int(input())

print(T)

for _ in range(T):
    _ = input()
    N = int(input())
    A = list(map(int, input().split()))

    B = sorted(A)
    C = sorted(A, reverse = True)

    if A == B or A == C:
        A[0], A[1] = A[1], A[0]

    print()
    print(N)
    for a in A:
        print(a, end=" ")
    print()
