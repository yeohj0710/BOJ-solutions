#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { int x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<P> v(3);

    for(int i=0; i<3; i++) cin >> v[i].x >> v[i].y;

    int ccw = v[0].x * (v[1].y - v[2].y) + v[1].x * (v[2].y - v[0].y) + v[2].x * (v[0].y - v[1].y);

    if(ccw > 0) cout << 1 << "\n";
    else if(ccw < 0) cout << -1 << "\n";
    else cout << 0 << "\n";
}
