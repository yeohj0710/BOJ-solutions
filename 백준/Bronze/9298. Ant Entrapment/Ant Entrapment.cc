#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(10);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case " << t << ": ";

        int n; cin >> n;
        double minx = 1000, maxx = -1000, miny = 1000, maxy = -1000;
        while(n--) {
            double x, y; cin >> x >> y;

            if(x < minx) minx = x;
            if(x > maxx) maxx = x;
            if(y < miny) miny = y;
            if(y > maxy) maxy = y;
        }

        cout << "Area " << (maxx - minx)*(maxy - miny) << ", ";
        cout << "Perimeter " << 2*(maxx - minx + maxy - miny) << "\n";
    }
}
