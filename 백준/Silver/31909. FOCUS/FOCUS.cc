#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(8);
    for(int i=0; i<8; i++) v[i] = i;

    for(int i=0; i<n; i++) {
        int x; cin >> x;

        vector<int> u;

        for(int j=0; j<8; j++)
            if((x >> j) & 1) u.push_back(j);

        if(u.size() != 2) continue;

        swap(v[u[0]], v[u[1]]);
    }

    int m; cin >> m;

    cout << v[m] << "\n";
}
