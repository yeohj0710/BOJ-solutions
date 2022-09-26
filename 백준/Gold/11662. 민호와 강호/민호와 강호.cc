#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(8);

    vector<s> v(4);
    for(int i=0; i<4; i++) cin >> v[i].x >> v[i].y;

    double l = 0, r = 1;

    for(int tr=1; tr<=1e5; tr++) {
        double m1 = (l*2 + r) / 3;
        double m2 = (l + r*2) / 3;

        double a = sqrt(pow((m1*v[1].x + (1-m1)*v[0].x) - (m1*v[3].x + (1-m1)*v[2].x), 2)
                        + pow((m1*v[1].y + (1-m1)*v[0].y) - (m1*v[3].y + (1-m1)*v[2].y), 2));
        double b = sqrt(pow((m2*v[1].x + (1-m2)*v[0].x) - (m2*v[3].x + (1-m2)*v[2].x), 2)
                        + pow((m2*v[1].y + (1-m2)*v[0].y) - (m2*v[3].y + (1-m2)*v[2].y), 2));

        if(tr == 1e5) {
            cout << a << "\n";
            break;
        }
        else if(a < b) r = m2;
        else if(a > b) l = m1;
    }
}
