#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    vector<int> v(46);
    v[0] = 1, v[1] = 1;

    for(int i=2; i<=45; i++) v[i] = v[i-1] + v[i-2];

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        cout << v[x] << "\n";
    }
}
