T = int(input())

for _ in range(T):
    N = int(input())
    M = int(input())

    cnt = 0

    while N >= M:
        tmp = M
        cnt2 = 0
        while len(str(N)) > len(str(tmp)) and N >= tmp * 10:
            tmp = int(str(tmp) + '0')
            cnt2 += 1

        N -= tmp
        cnt += pow(10, cnt2)

    print(cnt)
    print(N)
    print()
