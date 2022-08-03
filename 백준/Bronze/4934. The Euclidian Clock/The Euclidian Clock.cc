#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(3);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        double h1, m1, s1, u1;
        cin >> h1 >> m1 >> s1 >> u1;

        double x1 = h1/12 + m1/(12*60) + s1/(12*60*60) + u1/(12*60*60*100);

        double h2, m2, s2, u2;
        cin >> h2 >> m2 >> s2 >> u2;

        double x2 = h2/12 + m2/(12*60) + s2/(12*60*60) + u2/(12*60*60*100);

        double r; cin >> r;

        double ans = M_PI * r * r * (x2 - x1);

        cout << t << ". " << ans << "\n";
    }
}
