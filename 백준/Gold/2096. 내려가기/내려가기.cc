#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cmax[3] = {}, cmin[3] = {}, pmax[3] = {}, pmin[3] = {};

    for(int i=0; i<N; i++) {
        int a, b, c; cin >> a >> b >> c;

        cmax[0] = a + max(pmax[0], pmax[1]);
        cmin[0] = a + min(pmin[0], pmin[1]);

        cmax[1] = b + max({pmax[0], pmax[1], pmax[2]});
        cmin[1] = b + min({pmin[0], pmin[1], pmin[2]});

        cmax[2] = c + max(pmax[1], pmax[2]);
        cmin[2] = c + min(pmin[1], pmin[2]);

        for(int j=0; j<3; j++) {
            pmax[j] = cmax[j];
            pmin[j] = cmin[j];
        }
    }

    int Max = max({pmax[0], pmax[1], pmax[2]});
    int Min = min({pmin[0], pmin[1], pmin[2]});

    cout << Max << " " << Min << "\n";
}
