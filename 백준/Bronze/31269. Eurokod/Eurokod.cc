#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    struct s { int a, b, c; };
    vector<s> v(n);

    for(int i=0; i<n; i++) {
        v[i].a = i + 1;

        int x; cin >> x;

        v[x-1].b = n - i;
    }

    for(int i=0; i<n; i++) cin >> v[i].c;

    sort(v.begin(), v.end(), [](s x, s y) {
        return x.c > y.c;
    });

    for(int i=0; i<n; i++) v[i].c = n - i;

    sort(v.begin(), v.end(), [](s x, s y) {
        int xx = x.b + x.c, yy = y.b + y.c;

        if(xx != yy) return xx > yy;
        return x.c > y.c;
    });

    for(int i=0; i<n; i++)
        cout << i + 1 << ". Kod" << setw(2) << setfill('0') << v[i].a << " (" << v[i].b + v[i].c << ")\n";
}
