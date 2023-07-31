N = int(input())
v = list(map(int, input().split()))
v = list(set(v))
v.sort()

if len(v) == 1:
    print(0)
else:
    print(v[-2])
    