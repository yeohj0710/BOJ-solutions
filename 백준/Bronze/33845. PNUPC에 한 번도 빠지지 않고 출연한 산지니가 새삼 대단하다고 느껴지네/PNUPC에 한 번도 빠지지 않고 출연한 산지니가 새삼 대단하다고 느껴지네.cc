#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; cin >> a >> b;

    unordered_map<char, bool> mp;

    for(int i=0; i<a.length(); i++) mp[a[i]] = true;

    string ans = "";

    for(int i=0; i<b.length(); i++)
        if(!mp[b[i]]) ans += b[i];

    cout << ans << "\n";
}
