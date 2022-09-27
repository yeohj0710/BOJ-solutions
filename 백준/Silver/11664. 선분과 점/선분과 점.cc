#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double x, y, z; };

double f(s a, s b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    vector<s> v(3);
    for(int i=0; i<3; i++)
        cin >> v[i].x >> v[i].y >> v[i].z;

    double l = 0, r = 1, tr = 1e3;

    while(tr--) {
        double m1 = (l*2 + r) / 3;
        double m2 = (l + r*2) / 3;

        double a = f({m1*v[1].x + (1-m1)*v[0].x, m1*v[1].y + (1-m1)*v[0].y, m1*v[1].z + (1-m1)*v[0].z}, v[2]);
        double b = f({m2*v[1].x + (1-m2)*v[0].x, m2*v[1].y + (1-m2)*v[0].y, m2*v[1].z + (1-m2)*v[0].z}, v[2]);

        if(a > b) l = m1;
        else if(a < b) r = m2;
    }

    double m = (l + r) / 2;
    double ans = f({m*v[1].x + (1-m)*v[0].x, m*v[1].y + (1-m)*v[0].y, m*v[1].z + (1-m)*v[0].z}, v[2]);

    cout << ans << "\n";
}
