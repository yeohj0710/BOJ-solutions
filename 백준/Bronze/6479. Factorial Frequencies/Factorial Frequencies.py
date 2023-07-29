while True:
    N = int(input())

    if N == 0:
        break

    x = 1

    for i in range(1, N+1):
        x *= i

    v = [0] * 10

    while x > 0:
        v[x % 10] += 1
        x //= 10

    print(f"{N}! --")
    print(f"   (0)  {v[0]:3d}    (1)  {v[1]:3d}    (2)  {v[2]:3d}    (3)  {v[3]:3d}    (4)  {v[4]:3d}")
    print(f"   (5)  {v[5]:3d}    (6)  {v[6]:3d}    (7)  {v[7]:3d}    (8)  {v[8]:3d}    (9)  {v[9]:3d}")

    input()
