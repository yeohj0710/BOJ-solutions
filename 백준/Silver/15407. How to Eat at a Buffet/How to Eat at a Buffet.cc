#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    struct s { int a, b; };

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    int ans = 0;

    for(int i=0; i<N; i++) {
        ans += min(v[i].second, M) * v[i].first;

        M -= min(v[i].second, M);
    }

    cout << ans << "\n";
}
