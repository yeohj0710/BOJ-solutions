#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<vector<int>> v(n+1, vector<int>(5));
    int mod = 1e9 + 7;

    v[0][0] = 1;

    for(int i=1; i<=n; i++) v[i][0] = (v[i-1][0] * 25) % mod;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=4; j++) {
            if(j == 4) v[i][j] = (v[i-1][j-1] + v[i-1][j] * 26) % mod;
            else v[i][j] = (v[i-1][j-1] + v[i-1][j] * 25) % mod;
        }

    cout << v[n][4] << "\n";
}
