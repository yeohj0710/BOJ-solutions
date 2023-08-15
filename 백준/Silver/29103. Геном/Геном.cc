#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    if(d % 2 == 0) cout << a - b << "\n";
    else cout << b - a << "\n";
}
