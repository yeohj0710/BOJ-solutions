#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    if((a == 1 || a == 3) && (b == 6 || b == 8) && (c == 2 || c == 5)) cout << "JAH\n";
    else cout << "EI\n";
}
