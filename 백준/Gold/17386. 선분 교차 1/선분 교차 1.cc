#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { int x, y; };

int ccw(P a, P b, P c) {
    int val = a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);

    if(val == 0) return 0;
    else if(val > 0) return 1;
    else if(val < 0) return -1;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<P> v(4);
    for(int i=0; i<4; i++) cin >> v[i].x >> v[i].y;

    int a = ccw(v[0], v[1], v[2]) * ccw(v[0], v[1], v[3]);
    int b = ccw(v[2], v[3], v[0]) * ccw(v[2], v[3], v[1]);

    if((a < 0) && (b < 0)) cout << 1 << "\n";
    else cout << 0 << "\n";
}
