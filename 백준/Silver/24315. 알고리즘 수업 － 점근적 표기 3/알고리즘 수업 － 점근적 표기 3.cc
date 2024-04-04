#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a1, a0; cin >> a1 >> a0;

    int c1, c2; cin >> c1 >> c2;

    int n0; cin >> n0;

    if(c1 * n0 <= a1 * n0 + a0 && a1 * n0 + a0 <= c2 * n0) cout << 1 << "\n";
    else cout << 0 << "\n";
}
