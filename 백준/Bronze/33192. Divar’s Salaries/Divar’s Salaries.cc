#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int a, b, c; cin >> a >> b >> c;

        int ans = c * a * 2;

        if(b - c <= 140) ans += (b - c) * a;
        else ans += 140 * a + (b - c - 140) * a * 3 / 2;

        string s = to_string(ans), ss = "";

        for(int i=0; i<s.length(); i++) {
            ss = s[s.length() - 1 - i] + ss;

            if(i == s.length() - 1) break;

            if(i % 3 == 2) ss = "," + ss;
        }

        cout << ss << "\n";
    }
}
