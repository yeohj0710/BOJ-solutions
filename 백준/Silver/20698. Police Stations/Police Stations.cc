#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int sx = INT_MAX, sy = INT_MAX, ex = INT_MIN, ey = INT_MIN;

    while(N--) {
        int x, y; cin >> x >> y;

        sx = min(sx, x);
        sy = min(sy, y);

        ex = max(ex, x);
        ey = max(ey, y);
    }

    cout << (ex - sx + 1) / 2 << " " << (ey - sy + 1) / 2 << "\n";
}
