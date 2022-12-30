#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<bool> v(N+1);

    while(K--) {
        int x; cin >> x;

        v[x] = true;
    }

    int x = 0, ans = 0;

    while(x < N) {
        int y = M;

        while(v[x + y]) y--;

        x += y;
        ans++;
    }

    cout << ans << "\n";
}
