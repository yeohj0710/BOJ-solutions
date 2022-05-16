#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(7);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        double D, N; cin >> D >> N;

        cout << "Case #" << t << ": ";

        if(N == 1) {
            double a, b; cin >> a >> b;

            cout << D / ((D - a) / b) << "\n";
        }
        else {
            double a, b, c, d; cin >> a >> b >> c >> d;

            cout << D / max((D - a) / b, (D - c) / d) << "\n";
        }
    }
}
