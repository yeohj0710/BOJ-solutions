#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    unordered_map<char, int> mp;

    string s = "AabDdegOoPpQqR@";

    for(int i=0; i<s.length(); i++) mp[s[i]] = 1;

    mp['B'] = 2;

    string ss; getline(cin, ss);

    int ans = 0;

    for(int i=0; i<ss.length(); i++) ans += mp[ss[i]];

    cout << ans << "\n";
}
