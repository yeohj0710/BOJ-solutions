#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        double V, D; cin >> V >> D;

        double l = 0, r = 45;

        for(int i=0; i<100; i++) {
            double m = (l + r)/2;

            double theta = m * M_PI / 180.0;

            if(sin(theta*2) < 9.8*D/(V*V)) l = m;
            else r = m;
        }

        cout << "Case #" << t << ": " << l << "\n";
    }
}
