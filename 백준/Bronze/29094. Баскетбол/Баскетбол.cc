#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<string> split(string str, string sep) {
    vector<string> v;
    int x = 0, y = str.find(sep);

    while(y != -1) {
        v.push_back(str.substr(x, y - x));
        x = y + sep.length();
        y = str.find(sep, x);
    }
    v.push_back(str.substr(x));

    return v;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<string> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int m; cin >> m;

    unordered_map<string, int> mp;

    int a = 0, b = 0;

    while(m--) {
        string s1, s2; cin >> s1 >> s2;

        vector<string> u = split(s1, ":");

        mp[s2] += (stoi(u[0]) - a) + (stoi(u[1]) - b);
        a = stoi(u[0]), b = stoi(u[1]);
    }

    string ans = "";
    int mx = 0;

    for(int i=0; i<n; i++)
        if(mp[v[i]] > mx) {
            mx = mp[v[i]];
            ans = v[i];
        }

    cout << ans << " " << mx << "\n";
}
