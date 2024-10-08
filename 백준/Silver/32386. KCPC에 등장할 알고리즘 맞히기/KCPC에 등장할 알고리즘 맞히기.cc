#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<string> v;
    unordered_map<string, int> mp;

    while(n--) {
        int a, b; cin >> a >> b;

        while(b--) {
            string c; cin >> c;

            if(mp[c] == 0) v.push_back(c);

            mp[c]++;
        }
    }

    vector<string> u;
    int mx = 0;

    for(int i=0; i<v.size(); i++) {
        mx = max(mx, mp[v[i]]);
    }

    for(int i=0; i<v.size(); i++) {
        if(mp[v[i]] == mx) u.push_back(v[i]);
    }

    if(u.size() > 1) {
        cout << -1 << "\n";
        return 0;
    }

    cout << u[0] << "\n";
}
