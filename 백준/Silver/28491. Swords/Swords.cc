#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    int ans = 1, mx = v[0].second;

    for(int i=1; i<N; i++)
        if(v[i].first > v[i-1].first || v[i].second > mx) {
            ans++;
            mx = max(mx, v[i].second);
        }

    cout << ans << "\n";
}
