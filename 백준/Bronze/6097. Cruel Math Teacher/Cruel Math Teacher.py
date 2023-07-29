a, b = map(int, input().split())
s = str(a ** b)

for i in range(0, len(s), 70):
    print(s[i:i+70])
