#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, a, b; cin >> n >> a >> b;

    int x = n / a, y = n / b, z = n / (a * b / __gcd(a, b));

    cout << x - z << " " << y - z << " " << z << "\n";
}
