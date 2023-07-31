while True:
    try:
        N = int(input())
        x = 1

        for i in range(1, N+1):
            x *= i

        s = str(x)
        s = s.rstrip('0')

        print(f"{N:5d} -> {s[-1]}")

    except:
        break
