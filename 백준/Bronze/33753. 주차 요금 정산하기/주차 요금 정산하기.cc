#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    if(d <= 30) cout << a << "\n";
    else cout << a + ((d - 30 - 1) / b + 1) * c << "\n";
}
