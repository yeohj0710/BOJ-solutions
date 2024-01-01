#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    int cur = 0, ans = 0;

    if((cur % N) + 1 == K) ans++;

    while(M--) {
        int x; cin >> x;

        if(x == 1) cur++;
        else cur += N - 1;

        if((cur % N) + 1 == K) ans++;
    }

    cout << ans << "\n";
}
