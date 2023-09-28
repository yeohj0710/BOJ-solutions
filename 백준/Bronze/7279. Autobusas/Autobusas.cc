#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = 0, cur = 0;

    while(N--) {
        int a, b; cin >> a >> b;

        cur += a - b;

        ans = max(ans, max(cur - M, (int)0));
    }

    cout << ans << "\n";
}
