#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    int sum = 0, dur = INT_MAX;
    for(int i=0; i<M; i++) {
        sum += v[i].first;
        dur = min(dur, v[i].second);
    }

    cout << sum << " " << dur << "\n";
}
