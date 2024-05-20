#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; cin >> n >> m >> k;

    unordered_map<int, int> mp;
    int mx = 0, idx = 0;

    vector<pair<int, int>> v;

    while(m--) {
        int a, b, c; cin >> a >> b >> c;

        if(c == 0) {
            v.push_back({a, b});
        }
        else {
            int d = 0;

            if(c == 1) d = a;
            else d = b;

            mp[d]++;

            if(mp[d] > mx || (mp[d] == mx && d != k)) {
                mx = mp[d];
                idx = d;
            }
        }
    }

    int s = v.size();
    int mx_tmp = mx, idx_tmp = idx;
    int ans = 0;

    for(int i=0; i<(1<<s); i++) {
        vector<int> u;

        for(int j=s-1; j>=0; j--) {
            int bt = (i >> j) & 1;
            int d = 0;

            if(bt == 0) d = v[j].first;
            else d = v[j].second;

            mp[d]++;
            u.push_back(d);

            if(mp[d] > mx || (mp[d] == mx && d != k)) {
                mx = mp[d];
                idx = d;
            }
        }

        if(idx == k) ans++;

        mx = mx_tmp, idx = idx_tmp;

        for(int j=0; j<u.size(); j++) mp[u[j]]--;
    }

    cout << ans << "\n";
}
