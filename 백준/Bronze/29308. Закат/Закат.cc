#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int mx = 0;
    string ans = "";

    while(n--) {
        int a; string b, c; cin >> a >> b >> c;

        if(c != "Russia") continue;

        if(a > mx) {
            mx = a;
            ans = b;
        }
    }

    cout << ans << "\n";
}
