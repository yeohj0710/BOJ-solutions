#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    int bx = INT_MAX, by = INT_MAX;
    int ex = INT_MIN, ey = INT_MIN;

    while(N--) {
        int x, y; cin >> x >> y;

        bx = min(bx, x);
        by = min(by, y);

        ex = max(ex, x);
        ey = max(ey, y);
    }

    int d = max(ex - bx, ey - by);

    cout << d * d << "\n";
}
