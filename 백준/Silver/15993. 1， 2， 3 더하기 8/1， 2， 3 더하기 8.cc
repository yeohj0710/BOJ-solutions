#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(1e5 + 1), u(1e5 + 1);

    v[1] = 1, v[2] = 1, v[3] = 2;
    u[1] = 0, u[2] = 1, u[3] = 2;

    int mod = 1e9 + 9;

    for(int i=4; i<=1e5; i++) {
        v[i] = (u[i-1] + u[i-2] + u[i-3]) % mod;
        u[i] = (v[i-1] + v[i-2] + v[i-3]) % mod;
    }

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << v[N] << " " << u[N] << "\n";
    }
}
