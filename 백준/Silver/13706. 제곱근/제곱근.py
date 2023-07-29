N = int(input())

l, r, ans = 0, N, 0

while l <= r:
    m = (l + r) // 2

    if m * m == N:
        ans = m
        break
    elif m * m < N:
        l = m + 1
    else:
        r = m - 1

print(ans)
