#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, k, t; cin >> n >> k >> t;

    int ans = 0;

    while(n--) {
        int d; cin >> d;

        if(t > k) t = t + d - abs(t - k);
        else if(t < k) t = t + d + abs(t - k);
        else t = t + d;

        ans += abs(t - k);
    }

    cout << ans << "\n";
}
