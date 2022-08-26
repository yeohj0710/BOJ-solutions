#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double x, y, z; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double N, r; cin >> N >> r;

    vector<s> v(N);
    for(int i=0; i<N; i++)
        cin >> v[i].x >> v[i].y >> v[i].z;

    double ans = N * 4.0 / 3.0 * M_PI * r * r * r;

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            double d = sqrt(pow(v[i].x - v[j].x, 2) + pow(v[i].y - v[j].y, 2) + pow(v[i].z - v[j].z, 2));

            if(d >= r*2) continue;

            double vol = 2.0 / 3.0 * M_PI * pow(r - d/2, 2) * (2*r + d/2);

            ans -= vol;
        }

    cout << fixed;
    cout.precision(7);

    cout << ans << "\n";
}
