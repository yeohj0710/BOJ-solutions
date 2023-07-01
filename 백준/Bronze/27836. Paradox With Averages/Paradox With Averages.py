T = int(input())

for _ in range(T):
    input()
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))

    avg_a = 0
    avg_b = 0

    for a in A:
        avg_a += a
    for b in B:
        avg_b += b

    avg_a /= N
    avg_b /= M

    ans = 0

    for a in A:
        if a < avg_a and a > avg_b:
            ans += 1

    print(ans)

