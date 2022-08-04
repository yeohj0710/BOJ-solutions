#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<pair<int, int>> v(N+1);

    for(int i=1; i<=N; i++) cin >> v[i].first;
    for(int i=1; i<=N; i++) cin >> v[i].second;

    vector<vector<int>> u(M+1);

    for(int i=1; i<=N; i++) {
        u[v[i].first].push_back(v[i].second);
    }

    int cnt = 0;

    for(int i=1; i<=M; i++) {
        if(u[i].size() == 0) {
            cnt++;
            continue;
        }

        sort(u[i].begin(), u[i].end(), greater<int>());
    }

    vector<int> w;

    for(int i=1; i<=M; i++) {
        for(int j=1; j<u[i].size(); j++) w.push_back(u[i][j]);
    }

    sort(w.begin(), w.end());

    int ans = 0;

    for(int i=0; i<cnt; i++) ans += w[i];

    cout << ans << "\n";
}
