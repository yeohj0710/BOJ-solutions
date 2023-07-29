T = int(input())

for _ in range(T):
    a, b = map(int, input().split())

    x = 1

    for i in range(1, a+1):
        x *= i

    ans = 0

    while x > 0:
        if x % 10 == b:
            ans += 1
        x //= 10

    print(ans)
