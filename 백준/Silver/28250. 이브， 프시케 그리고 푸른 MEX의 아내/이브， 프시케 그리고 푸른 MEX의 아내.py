N = int(input())
A = list(map(int, input().split()))

zero = 0
one = 0

for a in A:
    if a == 0:
        zero += 1
    elif a == 1:
        one += 1

print(zero * (zero - 1) // 2 + zero * one * 2 + zero * (N - zero - one))
