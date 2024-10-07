#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, a, b; cin >> n >> a >> b;

    if(a <= b) cout << b - a << "\n";
    else cout << (n - a) + 1 + (b - 1) << "\n";
}
