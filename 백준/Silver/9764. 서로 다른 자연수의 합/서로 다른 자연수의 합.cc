#include <bits/stdc++.h>
using namespace std;

int dp[2001][2001];
int mod = 100999;

int f(int N, int x) {
    if(dp[N][x] != -1) return dp[N][x];
    if(N < x) return dp[N][x] = 0;
    if(N == 0 || N == x) return dp[N][x] = 1;

    return dp[N][x] = (f(N-x, x+1) + f(N, x+1)) % mod;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        memset(dp, -1, sizeof(dp));

        cout << f(N, 1) << "\n";
    }
}
