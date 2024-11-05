#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n+1), u(n+1);

    while(m--) {
        int a, b; cin >> a >> b;

        vector<int> w(n+1);
        for(int i=1; i<=n; i++) cin >> w[i];

        int idx = -1, mn = INT_MAX;

        for(int i=1; i<=n; i++) {
            if(a < v[i]) continue;

            if(w[i] < mn) {
                mn = w[i];
                idx = i;
            }
        }

        if(idx != -1) {
            v[idx] = a + mn;
            u[idx] += b;
        }
    }

    for(int i=1; i<=n; i++) cout << u[i] << " ";
    cout << "\n";
}
