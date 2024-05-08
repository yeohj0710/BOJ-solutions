#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> M >> N;

    M = (M - 1) % (N * 2) + 1;

    vector<pair<int, int>> v(N);
    vector<int> u(N * 2);
    unordered_map<int, int> m;

    for(int i=0; i<N; i++) {
        cin >> v[i].first >> v[i].second;

        u[i*2] = v[i].first;
        u[i*2 + 1] = v[i].second;
    }

    sort(u.begin(), u.end());

    for(int i=0; i<u.size(); i++) {
        m[u[i]] = i + 1;
    }

    int ans = 0;

    for(int i=0; i<N; i++) {
        if(m[v[i].first] == M || m[v[i].second] == M) ans = i + 1;
    }

    cout << ans << "\n";
}
