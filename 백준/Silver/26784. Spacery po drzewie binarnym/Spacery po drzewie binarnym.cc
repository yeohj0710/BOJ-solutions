#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        int ans = 0;

        while(a != b) {
            if(a > b) a /= 2;
            else if(a < b) b /= 2;

            ans++;
        }

        cout << ans << "\n";
    }
}
