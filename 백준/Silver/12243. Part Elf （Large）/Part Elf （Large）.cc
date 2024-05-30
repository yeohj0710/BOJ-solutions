#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        string s; cin >> s;

        int idx = 0;
        for(int i=0; i<s.length(); i++)
            if(s[i] == '/') idx = i;

        int a = stoll(s.substr(0, idx)), b = stoll(s.substr(idx+1, s.length()-idx));

        int gcd = __gcd(a, b);

        a /= gcd, b /= gcd;

        int tmp = 1;
        bool chk = false;

        while(tmp <= b) {
            if(tmp == b) chk = true;

            tmp *= 2;
        }

        if(!chk) {
            cout << "impossible\n";
            continue;
        }

        int ans = 0;

        while(true) {
            if(a >= b) break;

            b /= 2;
            ans++;
        }

        cout << ans << "\n";
    }
}
