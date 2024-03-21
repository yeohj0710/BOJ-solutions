#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double a, b, h; cin >> a >> b >> h;

    if(a == b) {
        cout << -1 << "\n";
        return 0;
    }

    double ans = M_PI * ((pow(b, 2) + pow(b * h / (b - a), 2)) - (pow(a, 2) + pow(a * h / (b - a), 2)));

    cout << fixed << setprecision(6);

    cout << abs(ans) << "\n";
}
