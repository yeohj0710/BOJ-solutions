#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    struct s { string a; int b; };
    vector<s> v(n);

    int mx = 0;

    for(int i=0; i<n; i++) {
        cin >> v[i].a >> v[i].b;

        if(v[i].a == "pig") mx = max(mx, v[i].b);
    }

    int ans = mx;

    for(int i=0; i<n; i++)
        if(v[i].a != "pig" && v[i].b < mx) ans += v[i].b;

    cout << ans << "\n";
}
