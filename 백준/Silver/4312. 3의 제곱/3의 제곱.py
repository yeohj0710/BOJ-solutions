while True:
    N = int(input())

    if N == 0:
        break

    s = ""
    N -= 1

    while N > 0:
        s += chr(ord('0') + N % 2)
        N //= 2

    v = []

    for i in range(len(s)):
        if s[i] == '1':
            v.append(3 ** i)

    v = map(str, v)

    if len(s) == 0:
        print("{ }")
    else:
        print("{", ", ".join(v), "}")
