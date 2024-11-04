#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n);
    for(int i=0; i<n; i++) v[i] = i + 1;

    for(int i=0; i<m-1; i++) {
        vector<int> u(v);

        for(int i=1; i<n-1; i++) u[i] = v[i-1];

        u[0] = v[n-2];

        v = u;
    }

    for(int i=0; i<n/2; i++) cout << v[i] << "-" << v[n-1-i] << "\n";
}
