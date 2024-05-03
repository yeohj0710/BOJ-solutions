#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int mn = INT_MAX, mx = INT_MIN;

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        mn = min(mn, x - i);
        mx = max(mx, x - i);
    }

    mn = abs(mn);

    int ans = mn + mx + min(mn, mx);

    cout << ans << "\n";
}
