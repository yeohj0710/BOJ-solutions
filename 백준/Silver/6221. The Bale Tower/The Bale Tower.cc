#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> a(N);

    for(int i=0; i<N; i++) cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    vector<int> v(N);
    for(int i=0; i<N; i++) v[i] = a[i].second;

    vector<int> u;
    u.push_back(v[0]);

    int cnt = 0;

    vector<pair<int, int>> dp(N);
    dp[0] = {v[0], 0};

    for(int i=1; i<N; i++) {
        if(v[i] > u.back()) {
            u.push_back(v[i]);
            cnt++;

            dp[i] = {v[i], cnt};
        }
        else {
            int x = lower_bound(u.begin(), u.end(), v[i]) - u.begin();
            u[x] = v[i];

            dp[i] = {v[i], x};
        }
    }

    cout << cnt + 1 << "\n";
}
