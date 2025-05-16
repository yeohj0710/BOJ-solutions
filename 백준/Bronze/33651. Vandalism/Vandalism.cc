#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    string t = "UAPC", ans = "";

    for(int i=0; i<t.length(); i++) {
        bool chk = false;

        for(int j=0; j<s.length(); j++)
            if(s[j] == t[i]) chk = true;

        if(!chk) ans += t[i];
    }

    cout << ans << "\n";
}
