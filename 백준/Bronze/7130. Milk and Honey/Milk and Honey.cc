#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        int x, y; cin >> x >> y;

        ans += max(a * x, b * y);
    }

    cout << ans << "\n";
}
