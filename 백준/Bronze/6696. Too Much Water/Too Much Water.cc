#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        double x, y; cin >> x >> y;
        if(x == 0 && y == 0) break;

        for(int i=1; ; i++) {
            double area = 50.0 * i;

            double r = sqrt(area * 2 / M_PI);

            if(x*x + y*y <= r*r) {
                cout << "The property will be flooded in hour " << i << ".\n";
                break;
            }
        }
    }
}
