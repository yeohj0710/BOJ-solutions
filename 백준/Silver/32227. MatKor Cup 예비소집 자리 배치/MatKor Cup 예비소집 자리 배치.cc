#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int gcd = __gcd(n, m);

    n /= gcd, m /= gcd;

    cout << n << "/" << m << "\n";
}
