#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int a; cin >> a;

    int mn = a, mx = a;

    vector<int> v(n);
    v[0] = 1;

    for(int i=1; i<n; i++) {
        int x; cin >> x;

        if(mn - m <= x && x <= mx + m) v[i] = 1;
        else continue;

        mn = min(mn, x);
        mx = max(mx, x);
    }

    for(int i=0; i<n; i++) cout << v[i] << " ";
    cout << "\n";
}
