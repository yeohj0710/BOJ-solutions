#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int n; string s; cin >> n >> s;

        while(s.find("ABB") != -1) {
            int x = s.find("ABB");

            s = s.substr(0, x) + "BA" + s.substr(x+3, n-(x+3));
        }

        cout << s << "\n";
    }
}
