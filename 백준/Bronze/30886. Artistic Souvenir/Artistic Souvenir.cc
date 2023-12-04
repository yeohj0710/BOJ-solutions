#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double x; cin >> x;

    double r = sqrt(x / M_PI);

    cout << fixed << setprecision(9);

    cout << pow((r + 1) * 2, 2) << "\n";
}
