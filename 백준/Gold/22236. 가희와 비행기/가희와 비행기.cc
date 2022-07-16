#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    N = (N - 2)/2;

    vector<int> dp(max(N+1, (int)2));
    dp[0] = 1, dp[1] = 1;

    for(int i=2; i<=N; i++)
        for(int j=0; j<i; j++) dp[i] = (dp[i] + dp[j]*dp[i-1-j]) % M;

    cout << dp[N] << "\n";
}
