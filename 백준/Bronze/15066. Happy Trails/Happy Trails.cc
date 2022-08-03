#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    double ans = 0;

    while(N--) {
        double th, x; cin >> th >> x;

        th = th * M_PI / 180.0;

        ans += x * sin(th);
    }

    cout << fixed;
    cout.precision(2);

    cout << ans << "\n";
}
