#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; cin >> a >> b;

    unordered_map<char, bool> mp;
    string s = "";

    for(int i=0; i<a.length(); i++) {
        if(!mp[a[i]]) s += a[i];

        mp[a[i]] = true;
    }

    for(char c='A'; c<='Z'; c++) {
        if(!mp[c]) s += c;

        mp[c] = true;
    }

    string ans = "";

    for(int i=0; i<b.length(); i++)
        ans += s[b[i] - 'A'];

    cout << ans << "\n";
}
