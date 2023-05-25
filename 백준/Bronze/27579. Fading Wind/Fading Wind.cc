#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int h, k, v, s; cin >> h >> k >> v >> s;

    int ans = 0;

    while(h > 0) {
        v += s;
        v -= max((int)1, v/10);

        if(v >= k) {
            h++;
        } else if(v > 0 && v < k) {
            h--;
            if(h == 0) v = 0;
        } else {
            h = 0, v = 0;
        }

        ans += v;

        if(s > 0) s--;
    }

    cout << ans << "\n";
}
