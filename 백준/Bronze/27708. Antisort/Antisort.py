T = int(input())

print(T)

for _ in range(T):
    _ = input()
    N = int(input())
    A = list(map(int, input().split()))

    check = True
    flag = True

    for i in range(1, len(A)):
        if A[i-1] > A[i]:
            check = False
        if A[i-1] < A[i]:
            flag = False

    if check or flag:
        A[0], A[1] = A[1], A[0]

    print()
    print(N)
    for a in A:
        print(a, end=" ")
    print()
