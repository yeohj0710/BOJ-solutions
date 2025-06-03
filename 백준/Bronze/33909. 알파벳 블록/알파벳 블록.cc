#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    b += c * 2;
    a += d;

    cout << min(a / 3, b / 6) << "\n";
}
