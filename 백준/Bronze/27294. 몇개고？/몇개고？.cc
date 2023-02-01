#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    if(!(12 <= a && a <= 16) || b == 1) cout << 280 << "\n";
    else cout << 320 << "\n";
}
