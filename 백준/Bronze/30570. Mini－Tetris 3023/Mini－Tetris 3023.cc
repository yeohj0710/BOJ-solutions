#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    if(c < 2) cout << a * 2 << "\n";
    else cout << a * 2 + b * 2 + c / 2 * 3 << "\n";
}
