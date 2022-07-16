#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    vector<int> u(N+1);
    for(int i=1; i<=N; i++) u[i] = u[i-1] + v[i];

    if(u[N] % 4 != 0) {
        cout << 0 << "\n";
        return 0;
    }

    if(u[N] == 0) {
        int cnt = 0;

        for(int i=1; i<N; i++)
            if(u[i] == 0) cnt++;

        cout << cnt * (cnt - 1) * (cnt - 2) / 6 << "\n";
        return 0;
    }

    int unit = u[N] / 4;
    vector<int> dp(5);

    for(int i=1; i<=N; i++) {
        if(u[i] % unit != 0) continue;
        if(u[i] / unit <= 0) continue;

        if(u[i] / unit == 1) dp[1]++;
        else dp[u[i] / unit] += dp[u[i] / unit - 1];
    }

    cout << dp[3] << "\n";
}
