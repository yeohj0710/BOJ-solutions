import math

T = int(input())

def rev(s):
    return s[::-1]

def tail(s):
    return s[1:]

for _ in range(T):
    s = input()
    N = math.ceil(len(s) / 3)
    r = s[:N]
    check = False
    if r + rev(r) + r == s or r + tail(rev(r)) + r == s\
            or r + rev(r) + tail(r) == s or r + tail(rev(r)) + tail(r) == s:
        check = True

    if check:
        print(1)
    else:
        print(0)
