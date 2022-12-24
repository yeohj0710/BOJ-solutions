#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int a, b; cin >> a >> b;

    int x = a - (b - a*2) / 2;
    int y = (b - a*2) / 2;

    cout << x << " " << y << "\n";
}
