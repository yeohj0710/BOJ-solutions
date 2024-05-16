#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int mod = 1e9 + 7;

    cout << ((a + 2) % mod) * ((b + 2) % mod) % mod << "\n";
}
