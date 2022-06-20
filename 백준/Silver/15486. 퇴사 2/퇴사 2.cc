#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);
    for(int i=0; i<N; i++) cin >> v[i] >> u[i];

    vector<int> dp(N+1);
    for(int i=0; i<N; i++) {
        dp[i+1] = max(dp[i+1], dp[i]);
        if(i + v[i] <= N) dp[i + v[i]] = max(dp[i + v[i]], dp[i] + u[i]);
    }

    cout << dp[N] << "\n";
}
