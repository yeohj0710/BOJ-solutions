#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    int l = 1, r = INT_MAX, ans = INT_MAX;

    while(l <= r) {
        int m = (l + r) / 2;
        bool chk = false;

        for(int i=1; i<N; i++)
            if(v[i-1].first + min(m, v[i-1].second / 2) >= v[i].first - min(m, v[i].second / 2)) chk = true;

        if(chk) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    if(ans != INT_MAX) cout << ans - 1 << "\n";
    else cout << "forever\n";
}
