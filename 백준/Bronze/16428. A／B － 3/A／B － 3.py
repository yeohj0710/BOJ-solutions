a, b = map(int, input().split())

c = a // b
d = a % b

if d < 0:
    c += 1
    d -= b

print(c)
print(d)