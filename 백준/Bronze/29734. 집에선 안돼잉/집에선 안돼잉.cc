#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    int x = a + (a - 1) / 8 * d;
    int y = c + b + (b - 1) / 8 * (2 * c + d);

    if(x < y) cout << "Zip\n" << x << "\n";
    else cout << "Dok\n" << y << "\n";
}
