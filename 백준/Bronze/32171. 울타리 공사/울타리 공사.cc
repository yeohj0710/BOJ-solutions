#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int mnx = INT_MAX, mxx = INT_MIN, mny = INT_MAX, mxy = INT_MIN;

    while(n--) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        mnx = min(mnx, a);
        mny = min(mny, b);
        mxx = max(mxx, c);
        mxy = max(mxy, d);

        cout << (mxx - mnx) * 2 + (mxy - mny) * 2 << "\n";
    }
}
