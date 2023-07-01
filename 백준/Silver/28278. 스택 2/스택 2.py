import sys

input = sys.stdin.readline

N = int(input().rstrip())
A = []

for _ in range(N):
    x = list(map(int, input().rstrip().split()))

    if x[0] == 1:
        A.append(x[1])
    elif x[0] == 2:
        if len(A) == 0:
            print(-1)
        else:
            print(A[-1])
            A.pop()
    elif x[0] == 3:
        print(len(A))
    elif x[0] == 4:
        print(1 if len(A) == 0 else 0)
    else:
        if len(A) > 0:
            print(A[-1])
        else:
            print(-1)
