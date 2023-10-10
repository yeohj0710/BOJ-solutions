T = int(input())

for _ in range(T):
    s = input()

    if s.count(".") >= 1:
        a, b, c = map(int, s.split("."))
        print(f"{a:02d}.{b:02d}.{c:04d} {b:02d}/{a:02d}/{c:04d}")
    else:
        a, b, c = map(int, s.split("/"))
        print(f"{b:02d}.{a:02d}.{c:04d} {a:02d}/{b:02d}/{c:04d}")
