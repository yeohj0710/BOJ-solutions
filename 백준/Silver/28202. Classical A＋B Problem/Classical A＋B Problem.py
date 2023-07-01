T = int(input())

for _ in range(T):
    N = int(input())
    M = len(str(N))
    for i in range(max(M-1, 1), M+1):
        flag = False
        for j in range(1, 10):
            x = int(str(j) * i)
            y = N - x
            if y <= 0:
                continue
            check = True
            y = str(y)
            for k in range(len(y)):
                if y[k] != y[0]:
                    check = False
            if check:
                print(x, y)
                flag = True
                break
        if flag:
            break
