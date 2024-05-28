#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int n; string s; cin >> n >> s;

        while(n--) {
            string ss; cin >> ss;

            string ans = "";
            int idx = 0;

            for(int i=0; i<ss.length(); i++) {
                if(ss[i] == '0') idx = idx * 2 + 1;
                else idx = idx * 2 + 2;

                if(s[idx] != '*') {
                    ans += s[idx];
                    idx = 0;
                }
            }

            cout << ans << " ";
        }

        cout << "\n";
    }
}
