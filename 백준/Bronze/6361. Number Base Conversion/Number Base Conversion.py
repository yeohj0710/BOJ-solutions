def cnv(ch):
    if '0' <= ch <= '9':
        return ord(ch) - ord('0')
    elif 'A' <= ch <= 'Z':
        return ord(ch) - ord('A') + 10
    else:
        return ord(ch) - ord('a') + 36


def cnv2(num):
    if 0 <= num <= 9:
        return str(num)
    elif 10 <= num <= 35:
        return chr(ord('A') + num - 10)
    else:
        return chr(ord('a') + num - 36)


T = int(input())

for _ in range(T):
    N, M, s = input().split()
    N, M = map(int, (N, M))

    print(N, s)

    dec = 0

    for i in range(len(s)):
        dec = dec * N + cnv(s[i])
        
    if dec == 0:
        print(M, 0)
        print()
        continue

    ans = ""

    while dec > 0:
        ans += cnv2(dec % M)
        dec //= M

    ans = ans[::-1]

    print(M, ans)
    print()
