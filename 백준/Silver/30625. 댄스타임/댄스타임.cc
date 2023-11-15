#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int a = 0, b = 0;

    while(N--) {
        int x, y; cin >> x >> y;

        if(y == 0) a++;
        else b++;
    }

    int val = 1, mod = 1e9 + 7;

    if(b == 0) {
        cout << (1 + a * (M - 1)) % mod << "\n";
        return 0;
    }

    for(int i=0; i<b-1; i++) val = (val * (M - 1)) % mod;

    int ans = (val * (M - 1) + a * val * (M - 1) * (M - 1) + b * val) % mod;

    cout << ans << "\n";
}
