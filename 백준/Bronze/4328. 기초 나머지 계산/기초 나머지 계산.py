while True:
    v = list(map(int, input().split()))

    if v[0] == 0:
        break

    b, p, m = v

    p10 = int(str(p), b)
    m10 = int(str(m), b)

    ans10 = p10 % m10

    if ans10 == 0:
        print(0)
        continue

    ans = ""

    while ans10 > 0:
        ans += str(ans10 % b)
        ans10 //= b

    ans = ans[::-1]

    print(ans)
