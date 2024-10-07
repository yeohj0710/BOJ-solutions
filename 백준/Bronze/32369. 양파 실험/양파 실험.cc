#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, a, b; cin >> n >> a >> b;

    int x = 1, y = 1;

    while(n--) {
        x += a, y += b;

        if(x < y) swap(x, y);
        else if(x == y) y--;
    }

    cout << x << " " << y << "\n";
}
