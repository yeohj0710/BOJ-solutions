#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    unordered_map<char, bool> mp;

    int cnt = 0;

    for(int i=0; i<s.length(); i++) {
        if(!mp[s[i]]) cnt++;

        mp[s[i]] = true;
    }

    cout << s.length() - cnt << "\n";
}
