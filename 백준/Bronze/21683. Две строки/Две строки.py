x = input()
y = input()

x_max = -(10 ** 3000)

for i in range(len(x)):
    x = x[1:] + x[0]

    if x[0] == '0':
        continue

    x_max = max(x_max, int(x))

y_min = 10 ** 3000

for i in range(len(y)):
    y = y[1:] + y[0]

    if y[0] == '0':
        continue

    y_min = min(y_min, int(y))

print(x_max - y_min)
