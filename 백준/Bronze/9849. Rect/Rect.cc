#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int u = 10000, d = 0, l = 0, r = 10000;

    for(int i=0; i<N; i++) {
        int a, b, c, e; cin >> a >> b >> c >> e;

        l = max(l, a);
        r = min(r, b);
        d = max(d, c);
        u = min(u, e);
    }

    if(u >= d && r >= l) cout << (u - d)*(r - l) << "\n";
    else cout << 0 << "\n";
}
