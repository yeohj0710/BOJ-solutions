#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = 0;

    for(int i=0; i<3; i++) {
        int x; cin >> x;

        ans += min(N, x);
    }

    cout << ans << "\n";
}
