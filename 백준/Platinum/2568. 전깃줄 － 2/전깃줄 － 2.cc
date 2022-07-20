#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> p(N);
    for(int i=0; i<N; i++) cin >> p[i].first >> p[i].second;

    sort(p.begin(), p.end());

    vector<int> v(N);
    for(int i=0; i<N; i++) v[i] = p[i].second;

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

    vector<int> w;

    for(int i=N-1; i>=0; i--)
        if(cnt == dp[i].second) {
            w.push_back(dp[i].first);
            cnt--;
        }

    vector<int> rl(500001);
    for(int i=0; i<N; i++) rl[p[i].second] = p[i].first;

    vector<bool> b(500001);
    for(int i=0; i<w.size(); i++) b[rl[w[i]]] = true;

    vector<int> ans;
    for(int i=0; i<N; i++)
        if(!b[p[i].first]) ans.push_back(p[i].first);

    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++) cout << ans[i] << "\n";
}
