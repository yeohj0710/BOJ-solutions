#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(1e6 + 1), u(1e6 + 1);
    int mod = 1e9 + 9;

    v[0] = u[0] = v[1] = u[1] = 1;
    v[2] = u[2] = 2;
    v[3] = 3, u[3] = 4;

    for(int i=4; i<=1e6; i++) {
        v[i] = (v[i-1] + v[i-2]) % mod;
        u[i] = (u[i-1] + u[i-2] + u[i-3] + u[i-4]) % mod;
    }

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << (v[N] * u[N] % mod) << "\n";
    }
}
