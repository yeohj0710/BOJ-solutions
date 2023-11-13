#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    int ans = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i].first >> v[i].second;

        if(v[i].first != 0 && v[i].first == v[i].second) ans++;

        if(i == 0) continue;

        if(v[i].first != 0 && v[i].first == v[i-1].first) ans++;
        if(v[i].second != 0 && v[i].second == v[i-1].second) ans++;
    }

    cout << ans << "\n";
}
