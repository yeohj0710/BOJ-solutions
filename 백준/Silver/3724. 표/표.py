T = int(input())

for _ in range(T):
    M, N = map(int, input().split())

    v = [list(map(int, input().split())) for _ in range(N)]

    mx = -(10 ** 10000)
    idx = 0

    for i in range(M):
        mul = 1

        for j in range(N):
            mul *= v[j][i]

        if mul >= mx:
            mx = mul
            idx = i + 1

    print(idx)
