#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt[51] = {};
    for(int i=0; i<N; i++) {
        int x; cin >> x;
        cnt[x]++;
    }

    vector<int> dp(51);
    dp[1] = cnt[1];

    for(int i=2; i<=50; i++) dp[i] = dp[i-1] * cnt[i];

    int ans = 0;
    for(int i=1; i<=50; i++) ans += dp[i];

    cout << ans << "\n";
}
