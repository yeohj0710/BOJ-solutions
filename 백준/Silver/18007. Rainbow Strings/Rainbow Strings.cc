#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    vector<int> v(26);

    for(int i=0; i<str.length(); i++) {
        v[str[i] - 'a']++;
    }

    int ans = 1, mod = 11092019;

    for(int i=0; i<26; i++) ans = (ans * (v[i] + 1)) % mod;

    cout << ans << "\n";
}
