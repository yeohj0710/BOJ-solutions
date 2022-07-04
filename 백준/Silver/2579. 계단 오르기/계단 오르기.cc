#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    vector<int> dp(N+1);
    dp[1] = v[1];
    dp[2] = v[1] + v[2];

    for(int i=3; i<=N; i++) {
        dp[i] = max(dp[i], dp[i-2] + v[i]);
        dp[i] = max(dp[i], dp[i-3] + v[i-1] + v[i]);
    }

    cout << dp[N] << "\n";
}
