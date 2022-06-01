#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int x1, y1, z1, x2, y2, z2;

        x1 = y1 = z1 = INT_MIN;
        x2 = y2 = z2 = INT_MAX;

        while(N--) {
            int x, y, z, d; cin >> x >> y >> z >> d;

            x1 = max(x1, x); y1 = max(y1, y); z1 = max(z1, z);
            x2 = min(x2, x+d); y2 = min(y2, y+d); z2 = min(z2, z+d);
        }

        if(x1 > x2 || y1 > y2 || z1 > z2) cout << 0 << "\n";
        else cout << (x2 - x1) * (y2 - y1) * (z2 - z1) << "\n";
    }
}
