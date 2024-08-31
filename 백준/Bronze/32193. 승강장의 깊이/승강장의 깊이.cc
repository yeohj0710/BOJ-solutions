#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int a = 0, b = 0;

    while(n--) {
        int x, y; cin >> x >> y;

        a += x;
        b += y;

        cout << a - b << "\n";
    }
}
