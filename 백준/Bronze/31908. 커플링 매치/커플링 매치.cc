#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    map<string, vector<string>> mp;
    vector<string> v;

    while(n--) {
        string a, b; cin >> a >> b;

        if(b == "-") continue;

        mp[b].push_back(a);

        if(mp[b].size() == 1) v.push_back(b);
    }

    vector<vector<string>> u;

    for(int i=0; i<v.size(); i++)
        if(mp[v[i]].size() == 2) u.push_back({mp[v[i]][0], mp[v[i]][1]});

    cout << u.size() << "\n";

    for(int i=0; i<u.size(); i++) cout << u[i][0] << " " << u[i][1] << "\n";
}
