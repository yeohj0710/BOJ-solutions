#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int x = 0, y = 0, mx = 0, my = 0;

        while(true) {
            int dx, dy; cin >> dx >> dy;

            if(dx == 0 && dy == 0) break;

            x += dx, y += dy;

            if(x * x + y * y > mx * mx + my * my || (x * x + y * y == mx * mx + my * my && x > mx)) {
                mx = x, my = y;
            }
        }

        cout << mx << " " << my << "\n";
    }
}
