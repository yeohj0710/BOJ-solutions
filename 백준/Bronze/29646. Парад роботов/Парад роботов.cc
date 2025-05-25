#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    struct s { double a, b; };
    vector<s> v(n);

    double a = 0, b = 0;

    for(int i=0; i<n; i++) {
        cin >> v[i].a >> v[i].b;

        a += v[i].a, b += v[i].b;
    }

    for(int i=0; i<n; i++) {
        int x = v[i].a, y = v[i].b;

        v[i].a = a / n, v[i].b = b / n;

        a = a - x + v[i].a;
        b = b - y + v[i].b;
    }

    cout << fixed << setprecision(3);
    cout << v[m-1].a << " " << v[m-1].b << "\n";
}
