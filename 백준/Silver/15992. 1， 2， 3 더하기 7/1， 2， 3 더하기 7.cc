#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<vector<int>> v(1001, vector<int>(1001));

    v[1][1] = v[2][1] = v[3][1] = v[2][2] = v[3][3] = 1;
    v[3][2] = 2;

    int mod = 1e9 + 9;

    for(int i=4; i<=1000; i++)
        for(int j=1; j<=i; j++)
            v[i][j] = (v[i-1][j-1] + v[i-2][j-1] + v[i-3][j-1]) % mod;

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        cout << v[a][b] << "\n";
    }
}
