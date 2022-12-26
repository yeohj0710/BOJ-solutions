#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = 0, cur = 1;

    while(M--) {
        int x; cin >> x;

        ans += min(abs(cur - x), N - abs(cur - x));

        cur = x;
    }

    cout << ans << "\n";
}
