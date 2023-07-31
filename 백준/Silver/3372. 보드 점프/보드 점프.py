N = int(input())
v = [list(map(int, input().split())) for _ in range(N)]
u = [[0 for _ in range(N)] for _ in range(N)]
u[0][0] = 1

for i in range(N):
    for j in range(N):
        if v[i][j] == 0:
            continue

        if i + v[i][j] < N:
            u[i + v[i][j]][j] += u[i][j]
        if j + v[i][j] < N:
            u[i][j + v[i][j]] += u[i][j]

print(u[N-1][N-1])
