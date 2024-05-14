#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int cur = 0, ans = 0;

    while(N--) {
        int x; cin >> x;

        cur += x;

        if(cur < 0) cur = 0;

        if(cur >= M) ans++;
    }

    cout << ans << "\n";
}
