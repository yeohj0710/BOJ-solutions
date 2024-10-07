#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        string s; cin >> s;

        int ans = 0;

        for(int i=0; i<s.length(); i++) {
            if(i + 3 > s.length()) break;
            if(s.substr(i, 3) == "WOW") ans++;
        }

        cout << ans << "\n";
    }
}
