#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second - a.first > b.second - b.first;
    });

    int ans = 0;

    for(int i=0; i<M; i++) ans += v[i].first;
    for(int i=M; i<N; i++) ans += v[i].second;

    cout << ans << "\n";
}
