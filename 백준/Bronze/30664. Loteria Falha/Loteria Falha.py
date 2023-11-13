while True:
    x = int(input())

    if x == 0:
        break

    if x % 42 == 0:
        print("PREMIADO")
    else:
        print("TENTE NOVAMENTE")
