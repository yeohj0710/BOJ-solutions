#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        double v0, th, x1, h1, h2;

        cin >> v0 >> th >> x1 >> h1 >> h2;

        th = th * M_PI / 180.0;

        double y = x1 * tan(th) - (9.81 * x1 * x1) / (2 * v0 * v0 * cos(th) * cos(th));

        if(h1 + 1 < y && y < h2 - 1) cout << "Safe\n";
        else cout << "Not Safe\n";
    }
}
