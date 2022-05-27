a, b = map(int, input().split())

check = True
div = 0

for i in range(2, b):
    while a % i == 0:
        a //= i
        if check:
            div = i
            check = False

if check:
    print('GOOD')
else:
    print('BAD ' + str(div))
