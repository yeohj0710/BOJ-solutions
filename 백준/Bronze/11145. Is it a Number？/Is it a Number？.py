def is_integer(s):
    try:
        int(s)
        return True
    except ValueError:
        return False


T = int(input())

for _ in range(T):
    s = input()
    s = s.strip()

    chk = True

    for ch in s:
        if not '0' <= ch <= '9':
            chk = False

    if not chk:
        print("invalid input")
        continue

    if is_integer(s):
        print(int(s))
    else:
        print("invalid input")
