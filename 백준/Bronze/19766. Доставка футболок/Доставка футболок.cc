#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; cin >> n >> m >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<int> u(n);
    for(int i=0; i<n; i++) cin >> u[i];

    int cur = 0;

    for(int i=0; i<n; i++) {
        cur += v[i];

        if(u[i] <= cur + m) cur = max(cur, u[i]) + k;
        else cur += m;
    }

    cout << cur << "\n";
}
