#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = 0;

    while(N--) {
        int x; cin >> x;

        while(true) {
            x++;

            if(M % x == 0) ans++;
            else break;
        }
    }

    cout << ans << "\n";
}
