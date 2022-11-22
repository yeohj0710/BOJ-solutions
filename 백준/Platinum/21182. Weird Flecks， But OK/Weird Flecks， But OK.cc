#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double x, y, z; };
struct p { double x, y; };

double dis(p a, p b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(4);

    int N; cin >> N;

    vector<s> u(N);
    for(int i=0; i<N; i++) cin >> u[i].x >> u[i].y >> u[i].z;

    double ans = LLONG_MAX;

    for(int t=0; t<3; t++) {
        vector<p> v(N);

        for(int i=0; i<N; i++) {
            if(t == 0) v[i].x = u[i].x, v[i].y = u[i].y;
            else if(t == 1) v[i].x = u[i].y, v[i].y = u[i].z;
            else if(t == 2) v[i].x = u[i].z, v[i].y = u[i].x;
        }

        p cen = {0, 0};
        double r = 0;

        for(int i=0; i<N; i++) {
            if(dis(cen, v[i]) <= r) continue;

            cen = v[i], r = 0;

            for(int j=0; j<i; j++) {
                if(dis(cen, v[j]) <= r) continue;

                cen = {(v[i].x + v[j].x) / 2, (v[i].y + v[j].y) / 2};
                r = dis(cen, v[i]);

                for(int k=0; k<j; k++) {
                    if(dis(cen, v[k]) <= r) continue;

                    cen.x = ((pow(v[j].x, 2) - pow(v[k].x, 2) + pow(v[j].y, 2) - pow(v[k].y, 2)) * (v[i].y - v[j].y)
                             - (pow(v[j].x, 2) - pow(v[i].x, 2) + pow(v[j].y, 2) - pow(v[i].y, 2)) * (v[k].y - v[j].y))
                             / ((v[i].x - v[j].x) * (v[k].y - v[j].y) * 2 - (v[k].x - v[j].x) * (v[i].y - v[j].y) * 2);
                    cen.y = ((pow(v[j].y, 2) - pow(v[k].y, 2) + pow(v[j].x, 2) - pow(v[k].x, 2)) * (v[i].x - v[j].x)
                             - (pow(v[j].y, 2) - pow(v[i].y, 2) + pow(v[j].x, 2) - pow(v[i].x, 2)) * (v[k].x - v[j].x))
                             / ((v[i]. y- v[j].y) * (v[k].x - v[j].x) * 2 - (v[k].y - v[j].y) * (v[i].x - v[j].x) * 2);
                    r = dis(cen, v[i]);
                }
            }
        }

        ans = min(ans, r*2);
    }

    cout << ans << "\n";
}
