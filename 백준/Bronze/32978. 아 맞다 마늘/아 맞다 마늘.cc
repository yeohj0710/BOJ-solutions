#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    unordered_map<string, bool> mp;
    vector<string> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    for(int i=0; i<n-1; i++) {
        string s; cin >> s;

        mp[s] = true;
    }

    for(int i=0; i<n; i++) {
        if(!mp[v[i]]) cout << v[i] << "\n";
    }
}
