#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    struct s { string a; int b, c, d; };
    vector<s> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i].a >> v[i].b >> v[i].c >> v[i].d;

    int m; cin >> m;

    int a = 0, b = 0;

    for(int i=0; i<n; i++) {
        if(v[i].b > m) continue;

        if(v[i].a == "CAUGHT") a += v[i].c, b += v[i].d;
        else a -= v[i].c, b -= v[i].d;
    }

    cout << a << " " << b << "\n";
}
