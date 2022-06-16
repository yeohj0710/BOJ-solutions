#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<bool> v(N+1);
    while(M--) {
        int x; cin >> x;
        v[x] = true;
    }

    int dp[41] = {1, 1};
    for(int i=2; i<=40; i++) dp[i] = dp[i-1] + dp[i-2];

    int ans = 1, cnt = 0;
    for(int i=1; i<=N; i++) {
        if(!v[i]) cnt++;
        else {
            ans *= dp[cnt];
            cnt = 0;
        }
    }
    ans *= dp[cnt];

    cout << ans << "\n";
}
