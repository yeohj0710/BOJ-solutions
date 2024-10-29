#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<vector<bool>> v(n+1, vector<bool>(3));

    while(m--) {
        int a, b; cin >> a >> b;

        if(b <= 2) v[a][b] = true;
    }

    for(int i=1; i<=n; i++)
        if(v[i][1] && v[i][2]) cout << i << "\n";
}
