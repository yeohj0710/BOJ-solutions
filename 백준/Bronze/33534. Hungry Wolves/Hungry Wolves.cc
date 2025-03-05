#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double s; cin >> s;

    double r = sqrt(s / M_PI);

    double ans = 2 * M_PI * r + 0.1;

    cout << fixed << setprecision(1);

    cout << floor(ans * 10) / 10 << "\n";
}
