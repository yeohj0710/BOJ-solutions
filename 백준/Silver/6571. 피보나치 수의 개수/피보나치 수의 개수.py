while True:
    a, b = map(int, input().split())

    if a == 0 and b == 0:
        break

    v = [0, 1]
    ans = 0

    while True:
        x = v[-1] + v[-2]

        if x > b:
            break

        if a <= x <= b:
            ans += 1

        v.append(x)

    print(ans)
