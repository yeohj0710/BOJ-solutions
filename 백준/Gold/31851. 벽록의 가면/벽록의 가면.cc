#include <bits/stdc++.h>
#define int long long
using namespace std;

struct p { int x, y; };

int cr(p a, p b, p c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

bool f(p a, p b, p c, p d) {
    int cr1 = cr(a, b, d), cr2 = cr(b, c, d), cr3 = cr(c, a, d);

    if((cr1 > 0 && cr2 > 0 && cr3 > 0) || (cr1 < 0 && cr2 < 0 && cr3 < 0)) return true;
    else return false;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<p> v(n);
    for(int i=0; i<n; i++) cin >> v[i].x >> v[i].y;

    int ans = n * (n - 1) * (n - 2) * (n - 3) / 24;

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            for(int k=j+1; k<n; k++)
                for(int l=0; l<n; l++) {
                    if(l == i || l == j || l == k) continue;
                    if(f(v[i], v[j], v[k], v[l])) ans--;
                }

    cout << ans << "\n";
}
