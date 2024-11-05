#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int n; cin >> n;

        if(n == 0) break;

        if(n == 1) {
            string s; cin >> s;
            cout << s << "\n";
            continue;
        }

        int mx = 0;
        string ans = "";

        while(n--) {
            string s; cin >> s;

            int cnt = 0;

            for(int i=1; i<s.length(); i++) {
                if(s[i] != s[i-1]) continue;

                string vow = "aeiouy";

                if(find(vow.begin(), vow.end(), s[i]) != vow.end()) cnt++;
            }

            if(cnt > mx) {
                mx = cnt;
                ans = s;
            }
        }

        cout << ans << "\n";
    }
}
