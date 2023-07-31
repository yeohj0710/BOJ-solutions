v = [0, 1]

for i in range(2, 100001):
    v.append(v[-1] + v[-2])

T = int(input())

for _ in range(T):
    x = int(input())

    l, r, ans = 0, 10 ** 5, 0

    while l <= r:
        m = (l + r) // 2

        if v[m] <= x:
            ans = m
            l = m + 1
        else:
            r = m - 1

    print(ans)
