#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    vector<int> dp(N+1, INT_MAX);

    for(int i=0; i<M; i++) dp[v[i]] = 1;

    for(int i=1; i<=N; i++)
        for(int j=0; j<M; j++)
            if(v[j] < i) dp[i] = min(dp[i], dp[i - v[j]] + 1);

    cout << dp[N] << "\n";
}
