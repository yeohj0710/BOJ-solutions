#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int cur = 0, mx = 0, mn = 0, ans = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(x == 1) cur++;
        else cur--;

        mx = max(mx, cur);
        mn = min(mn, cur);

        ans = max({ans, abs(cur - mn), abs(cur - mx)});
    }

    cout << ans << "\n";
}
