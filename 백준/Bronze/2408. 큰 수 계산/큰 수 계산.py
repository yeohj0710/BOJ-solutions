N = int(input())

str = ""

for _ in range(N*2 - 1):
    ch = input()
    if ch == "/":
        ch = "//"
    str += ch

print(eval(str))