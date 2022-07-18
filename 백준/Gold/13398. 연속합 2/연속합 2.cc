#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int dp[100001][2] = {{v[0], v[0]}};

    for(int i=1; i<N; i++) {
        dp[i][0] = max(dp[i-1][0], (int)0) + v[i];
        dp[i][1] = max(dp[i-1][0], dp[i-1][1] + v[i]);
    }

    int ans = INT_MIN;
    for(int i=0; i<N; i++) ans = max({ans, dp[i][0], dp[i][1]});

    cout << ans << "\n";
}
