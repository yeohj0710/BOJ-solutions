#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    string ans = "";

    for(int i=1; i<s.length(); i++) {
        if(s[i] == s[i-1]) ans += s[i];
    }

    cout << ans << "\n";
}
