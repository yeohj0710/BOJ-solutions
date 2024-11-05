#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; cin >> n >> m >> k;

    vector<int> v(n);
    int mx = 0;

    while(k--) {
        int x; cin >> x;

        v[(x - 1) / m]++;

        mx = max(mx, v[(x - 1) / m]);
    }

    for(int i=mx; i>=1; i--) {
        for(int j=0; j<n; j++) {
            if(v[j] >= i) cout << "#";
            else cout << ".";
        }
        cout << "\n";
    }

    for(int i=0; i<n; i++) cout << "-";
    cout << "\n";
}
