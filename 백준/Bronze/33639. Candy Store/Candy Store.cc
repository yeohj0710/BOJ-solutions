#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    map<string, vector<string>> mp;

    while(n--) {
        string a, b; cin >> a >> b;

        string s = string(1, a[0]) + b[0];

        mp[s].push_back(a + " " + b);
    }

    while(m--) {
        string s; cin >> s;

        if(mp[s].size() == 0) cout << "nobody\n";
        else if(mp[s].size() >= 2) cout << "ambiguous\n";
        else cout << mp[s][0] << "\n";
    }
}
