#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    if((b >= c && a * 2 >= d) || (b >= d && a * 2 >= c)) cout << "YES\n";
    else cout << "NO\n";
}
