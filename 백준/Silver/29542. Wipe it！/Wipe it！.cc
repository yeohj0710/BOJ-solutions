#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    unordered_map<char, bool> m;

    string ans = "";

    for(int i=0; i<str.length(); i++) {
        if(!m[str[i]]) ans += str[i];

        m[str[i]] = true;
    }

    cout << ans << "\n";
}
