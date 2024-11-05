#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int ans = 0, cnt = 0;

    while(n--) {
        int x; cin >> x;

        if(x == 0) {
            ans = max(ans, cnt);
            cnt = 0;
        }
        else cnt++;
    }
    ans = max(ans, cnt);

    ans++;

    cout << ans << "\n";
}
