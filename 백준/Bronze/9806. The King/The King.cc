#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = 0;

    while(N--) {
        int x; cin >> x;

        int y = 1;

        for(int i=0; i<M; i++) y *= x;

        if(y > 0) ans += y;
    }

    cout << ans << "\n";
}
