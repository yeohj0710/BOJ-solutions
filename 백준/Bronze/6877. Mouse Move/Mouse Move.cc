#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int x = 0, y = 0;

    while(true) {
        int xx, yy; cin >> xx >> yy;

        if(xx == 0 && yy == 0) break;

        x += xx;
        y += yy;

        if(x < 0) x = 0;
        if(x > a) x = a;
        if(y < 0) y = 0;
        if(y > b) y = b;

        cout << x << " " << y << "\n";
    }
}
