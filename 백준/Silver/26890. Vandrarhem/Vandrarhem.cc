#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<pair<int, int>> v(M);
    for(int i=0; i<M; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    int ans = 0, cnt = 0;

    for(int i=0; i<M; i++) {
        ans += v[i].first * min(v[i].second, N - cnt);
        cnt += v[i].second;

        if(cnt >= N) break;
    }

    cout << ans << "\n";
}
