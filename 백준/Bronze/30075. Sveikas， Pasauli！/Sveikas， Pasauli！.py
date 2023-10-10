T = int(input())

ans = ""

for _ in range(T):
    s = input()
    ans += s[12:-1]

slist = ans.split("\\n")

for s in slist:
    print(s)