#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, k, a, b; cin >> n >> k >> a >> b;

    cout << b * (k - 1 + n - 1) << " " << a * (n - 1) << "\n";
}
