#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(6);

    double b, c, a1, a2; cin >> b >> c >> a1 >> a2;

    cout << (b + sqrt(b*b + c*4)) / 2 << "\n";
}
