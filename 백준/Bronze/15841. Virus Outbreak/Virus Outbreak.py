dp = [0 for i in range(500)]

dp[0] = 0
dp[1] = 1

for i in range(2, 500):
    dp[i] = dp[i-1] + dp[i-2]

while True:
    N = int(input())
    if N == -1:
        break

    print('Hour ' + str(N) + ': ' + str(dp[N]) + ' cow(s) affected')