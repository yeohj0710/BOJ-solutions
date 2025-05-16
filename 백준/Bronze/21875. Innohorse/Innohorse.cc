#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; cin >> a >> b;

    int x = abs(a[0] - b[0]);
    int y = abs(a[1] - b[1]);

    if(x > y) swap(x, y);

    cout << x << " " << y << "\n";
}
