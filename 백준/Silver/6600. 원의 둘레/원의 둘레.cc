#include <bits/stdc++.h>
#define int long long
using namespace std;

struct p { double x, y; };

double dis(p a, p b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    vector<p> v(3);

    while(cin >> v[0].x >> v[0].y) {
        cin >> v[1].x >> v[1].y;
        cin >> v[2].x >> v[2].y;

        double th = acos(((v[1].x - v[0].x) * (v[2].x - v[0].x) + (v[1].y - v[0].y) * (v[2].y - v[0].y)) / (dis(v[0], v[1]) * dis(v[0], v[2])));

        double ans = dis(v[1], v[2]) * M_PI / sin(th);

        cout << ans << "\n";
    }
}
