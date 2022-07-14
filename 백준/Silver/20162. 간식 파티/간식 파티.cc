#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> dp(v);

    for(int i=0; i<N; i++)
        for(int j=0; j<i; j++)
            if(v[i] > v[j]) dp[i] = max(dp[i], dp[j] + v[i]);

    int ans = INT_MIN;
    for(int i=0; i<N; i++) ans = max(ans, dp[i]);

    cout << ans << "\n";
}
