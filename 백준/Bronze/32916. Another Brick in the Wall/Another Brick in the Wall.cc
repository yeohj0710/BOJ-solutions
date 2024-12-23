#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    if(a % 2 == 0) cout << b / 2 * 2 << "\n";
    else cout << b << "\n";
}
