#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = 0, cur = 0;

    while(N--) {
        int x; cin >> x;

        cur += x;

        if(cur >= M) {
            ans++;
            cur = 0;
        }
    }

    cout << ans << "\n";
}
