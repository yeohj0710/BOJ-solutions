#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX = 101;

int dp[MAX][MAX][MAX] = {}; // dp[N][L][R]

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    dp[1][1][1] = 1;
    for(int i=2; i<=20; i++)
        for(int j=1; j<=i; j++)
            for(int k=1; k<=i; k++)
                dp[i][j][k] = (dp[i-1][j][k]*(i-2) + dp[i-1][j-1][k] + dp[i-1][j][k-1]);

    int T; cin >> T;

    while(T--) {
        int N, L, R; cin >> N >> L >> R;

        cout << dp[N][L][R] << "\n";
    }
}
