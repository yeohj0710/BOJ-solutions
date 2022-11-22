#include <bits/stdc++.h>
#define int long long
using namespace std;

struct p { double x, y; };

double cr(p a, p b) {
    return a.x * b.y - a.y * b.x;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<p> v(N);
        for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

        if(N <= 2) {
            cout << 0 << "\n";
            continue;
        }

        double ans = 0;

        for(int i=1; i<N-1; i++) {
            p ab = {v[i].x - v[0].x, v[i].y - v[0].y};
            p ac = {v[i+1].x - v[0].x, v[i+1].y - v[0].y};

            ans += 0.5 * cr(ab, ac);
        }

        ans = round(abs(ans));

        cout << ans << "\n";
    }
}
