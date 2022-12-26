#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N), u(N);
    int a = 0, b = 0;

    for(int i=0; i<N; i++) cin >> v[i], a += v[i];
    for(int i=0; i<N; i++) cin >> u[i], b += u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    v.erase(unique(v.begin(), v.end()), v.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    int ans = LLONG_MAX;

    for(int i=0; i<v.size(); i++) {
        int idx = lower_bound(u.begin(), u.end(), v[i] - (a - b) / 2) - u.begin();

        if(idx < u.size()) ans = min(ans, abs((a - b) - (v[i] - u[idx]) * 2));

        if(idx-1 >= 0) ans = min(ans, abs((a - b) - (v[i] - u[idx-1]) * 2));
        if(idx+1 < u.size()) ans = min(ans, abs((a - b) - (v[i] - u[idx+1]) * 2));

        idx = lower_bound(u.begin(), u.end(), v[i] - (a - b + 1) / 2) - u.begin();

        if(idx < u.size()) ans = min(ans, abs((a - b) - (v[i] - u[idx]) * 2));

        if(idx-1 >= 0) ans = min(ans, abs((a - b) - (v[i] - u[idx-1]) * 2));
        if(idx+1 < u.size()) ans = min(ans, abs((a - b) - (v[i] - u[idx+1]) * 2));
    }

    cout << ans << "\n";
}
