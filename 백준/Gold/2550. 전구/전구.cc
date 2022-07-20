#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> w(N+1), wr(N+1);
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        w[x] = i+1;
        wr[i+1] = x;
    }

    vector<int> v(N);
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        v[i] = w[x];
    }

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

    vector<int> ans;

    for(int i=N-1; i>=0; i--)
        if(cnt == dp[i].second) {
            ans.push_back(dp[i].first);
            cnt--;
        }

    vector<int> ansr;
    for(int i=ans.size()-1; i>=0; i--) ansr.push_back(wr[ans[i]]);

    sort(ansr.begin(), ansr.end());

    cout << ansr.size() << "\n";
    for(int i=0; i<ansr.size(); i++) cout << ansr[i] << " ";
}
