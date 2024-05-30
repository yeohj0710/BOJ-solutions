tc = int(input())

for t in range(1, tc + 1):
    print(f"Case #{t}: ", end="")

    n = int(input())

    if n <= 4:
        print("...")
        continue

    print("IT'S OVER 9000", end="")

    if n >= 31683:
        print("!")
        continue

    for i in range(9000, 0, -1):
        x = 1
        y = 9000

        while y >= 1:
            x *= y
            y -= i
        
        if len(str(x)) >= n:
            for j in range(i+1):
                print("!", end="")
            
            print()
            
            break
            
