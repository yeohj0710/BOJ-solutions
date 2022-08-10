#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    vector<vector<int>> dp(N+1, vector<int>(21));
    dp[1][v[1]] = 1;

    for(int i=2; i<N; i++) {
        for(int j=0; j<=20; j++) {
            if(j + v[i] <= 20) dp[i][j + v[i]] += dp[i-1][j];
            if(j - v[i] >= 0) dp[i][j - v[i]] += dp[i-1][j];
        }
    }

    cout << dp[N-1][v[N]] << "\n";
}
