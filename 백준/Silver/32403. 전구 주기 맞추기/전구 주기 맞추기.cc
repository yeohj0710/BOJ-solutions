#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int ans = 0;

    while(n--) {
        int x; cin >> x;

        for(int i=0; ; i++) {
            if(x - i >= 1 && m % (x - i) == 0) {
                ans += i;
                break;
            }
            else if(x + i <= m && m % (x + i) == 0) {
                ans += i;
                break;
            }
        }
    }

    cout << ans << "\n";
}
