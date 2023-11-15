#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int r, c, N; cin >> r >> c >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<pair<int, int>> u;
    int cnt = 1;

    for(int i=0; i<N-1; i++) {
        if(v[i] == v[i+1]) cnt++;
        else {
            u.push_back({v[i], cnt});
            cnt = 1;
        }
    }
    u.push_back({v[N-1], cnt});

    int ans = 0;

    for(int i=0; i<u.size(); i++)
        ans += min(u[i].second, c);

    ans = min(ans, r * c);

    cout << ans << "\n";
}
