#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = 0, prv = -1;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(i == 0 || x != prv + 1) ans += x;

        prv = x;
    }

    cout << ans << "\n";
}
