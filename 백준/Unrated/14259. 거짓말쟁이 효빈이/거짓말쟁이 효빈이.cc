#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    int L; cin >> L;

    vector<int> v(L);
    for(int i=0; i<L; i++) cin >> v[i];

    int l = 0, r = L, ans = INT_MAX;

    while(l <= r) {
        int m = (l + r) / 2;

        vector<bool> u(N+1);
        for(int i=0; i<m; i++) u[v[i]] = true;

        vector<int> w;
        w.push_back(0);

        for(int i=1; i<=N; i++)
            if(u[i]) w.push_back(i);

        w.push_back(N+1);

        int sum = 0;

        for(int i=1; i<w.size(); i++)
            sum += (w[i] - w[i-1]) / (K + 1);

        if(sum < M) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << -1 << "\n";
}
