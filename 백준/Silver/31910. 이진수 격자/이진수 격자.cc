#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<vector<int>> v(n+1, vector<int>(n+1));

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin >> v[i][j];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) {
            if(i == 1 && j == 1) continue;
            else if(i == 1) v[i][j] += v[i][j-1] * 2;
            else if(j == 1) v[i][j] += v[i-1][j] * 2;
            else v[i][j] += max(v[i-1][j], v[i][j-1]) * 2;
        }

    cout << v[n][n] << "\n";
}
