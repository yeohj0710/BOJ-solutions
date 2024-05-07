#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = 0, cur = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(cur + x > M) {
            cur = x;
            ans++;
        }
        else cur += x;
    }

    if(cur > 0) ans++;

    cout << ans << "\n";
}
