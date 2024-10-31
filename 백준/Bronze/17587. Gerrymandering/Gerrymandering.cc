#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    struct s { int a, b; };
    vector<s> v(n+1);
    int tot = 0;

    while(n--) {
        int a, b, c; cin >> a >> b >> c;

        v[a].a += b;
        v[a].b += c;
        tot += b + c;
    }

    int x = 0, y = 0;

    for(int i=1; i<=m; i++) {
        int h = (v[i].a + v[i].b) / 2 + 1;

        if(v[i].a > v[i].b) {
            cout << "A " << v[i].a - h << " " << v[i].b << "\n";

            x += v[i].a - h;
            y += v[i].b;
        }
        else {
            cout << "B " << v[i].a << " " << v[i].b - h << "\n";

            x += v[i].a;
            y += v[i].b - h;
        }
    }

    cout << fixed << setprecision(6);
    cout << abs((double)x - y) / tot << "\n";
}
