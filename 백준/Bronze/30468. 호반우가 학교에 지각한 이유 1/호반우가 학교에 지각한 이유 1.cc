#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    cout << max(e * 4 - a - b - c - d, (int)0) << "\n";
}
