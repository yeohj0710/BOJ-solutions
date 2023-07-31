while True:
    s = input()

    if s == "*":
        break

    if s.isdigit():
        s = int(s)
        ss = s
        ans = ""

        while s > 0:
            s -= 1
            ans += chr(ord('a') + s % 26)
            s //= 26

        print(f"{ans[::-1]:<21} {ss:,}")
    else:
        ans = 0

        for i in range(len(s)):
            ans = ans * 26 + (ord(s[i]) - ord('a') + 1)

        print(f"{s:<21} {ans:,}")
