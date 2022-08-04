#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[75][10] = {};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<=74; i++) dp[i][0] = 1;
    for(int i=1; i<=74; i++)
        for(int j=1; j<=9; j++)
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << dp[N+9][9] << "\n";
    }
}
