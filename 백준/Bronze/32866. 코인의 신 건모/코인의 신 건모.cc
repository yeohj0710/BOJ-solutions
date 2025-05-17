#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double a, b; cin >> a >> b;

    cout << fixed << setprecision(6);

    cout << (1 / ((100 - b) / 100) - 1) * 100 << "\n";
}
