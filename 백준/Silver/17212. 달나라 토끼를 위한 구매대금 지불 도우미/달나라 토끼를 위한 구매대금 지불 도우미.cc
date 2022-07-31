#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> dp(N+1, INT_MAX);
    dp[0] = 0;

    int v[4] = {1, 2, 5, 7};

    for(int i=1; i<=N; i++)
        for(int j=0; j<4; j++)
            if(v[j] <= i) dp[i] = min(dp[i], dp[i - v[j]] + 1);

    cout << dp[N] << "\n";
}
