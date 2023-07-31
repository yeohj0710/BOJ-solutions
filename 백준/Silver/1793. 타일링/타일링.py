v = [1] * 251
v[2] = 3

for i in range(3, 251):
    v[i] = v[i - 1] + v[i - 2] * 2

while True:
    try:
        N = int(input())
        print(v[N])
    except:
        break
