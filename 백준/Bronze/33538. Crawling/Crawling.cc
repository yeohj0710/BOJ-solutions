#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double l, n, t; cin >> l >> n >> t;

    bool chk = false;

    while(n--) {
        double f, b; cin >> f >> b;

        if(t > l / f + l / b) chk = true;
    }

    if(chk) cout << "HOPE\n";
    else cout << "DOOMED\n";
}
