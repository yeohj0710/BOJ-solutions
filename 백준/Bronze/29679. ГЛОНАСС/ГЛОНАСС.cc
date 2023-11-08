#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double t, r, v; cin >> t >> r >> v;

    cout << fixed << setprecision(6);

    if(v * t >= r * 2) cout << (v * t - r * 2) / t << "\n";
    else cout << 0 << "\n";
}
