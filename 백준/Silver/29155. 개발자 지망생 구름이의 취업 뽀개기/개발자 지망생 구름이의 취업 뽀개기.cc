#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> u(6);

    for(int i=1; i<=5; i++) cin >> u[i];

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    int ans = v[0].second;

    u[v[0].first]--;

    for(int i=1; i<N; i++) {
        if(u[v[i].first] == 0) continue;

        if(v[i-1].first < v[i].first) ans += v[i].second + 60;
        else ans += v[i].second + (v[i].second - v[i-1].second);

        u[v[i].first]--;
    }

    cout << ans << "\n";
}
