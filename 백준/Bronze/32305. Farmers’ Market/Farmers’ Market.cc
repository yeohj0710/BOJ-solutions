#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    int x = ((a * b - 1) / 12 + 1) * c;

    cout << x << "\n";
}
