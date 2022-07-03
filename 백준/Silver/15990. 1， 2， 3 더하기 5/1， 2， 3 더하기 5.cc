#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[100001][3] = {{0, 0 ,0}, {1, 0, 0}, {0, 1, 0}, {1, 1, 1}};
int mod = (int)(1e9 + 9);

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=4; i<=100000; i++) {
        dp[i][0] = (dp[i-1][1] + dp[i-1][2]) % mod;
        dp[i][1] = (dp[i-2][0] + dp[i-2][2]) % mod;
        dp[i][2] = (dp[i-3][0] + dp[i-3][1]) % mod;
    }

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << (dp[N][0] + dp[N][1] + dp[N][2]) % mod << "\n";
    }
}
