a, b = map(int, input().split())

s = ''
i = 0

while True:
    if len(s) >= b+1:
        break

    s += str(pow(a, i))
    i += 1

print(s[b-1])