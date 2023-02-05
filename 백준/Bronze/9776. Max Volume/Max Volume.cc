#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    cout << fixed << setprecision(3);

    int N; cin >> N;

    double ans = 0;

    while(N--) {
        char ch; cin >> ch;

        double val;

        if(ch == 'C') {
            double r, h; cin >> r >> h;

            val = 1.0 / 3.0 * M_PI * r * r * h;
        }
        else if(ch == 'L') {
            double r, h; cin >> r >> h;

            val = M_PI * r * r * h;
        }
        else {
            double r; cin >> r;

            val = 4.0 / 3.0 * M_PI * r * r * r;
        }

        ans = max(ans, val);
    }

    cout << ans << "\n";
}
