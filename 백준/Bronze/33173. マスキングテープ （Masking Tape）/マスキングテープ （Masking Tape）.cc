#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; cin >> n >> m >> k;

    vector<vector<int>> v(n+2, vector<int>(m+2));
    vector<vector<bool>> u(n+2, vector<bool>(m+2));

    while(k--) {
        int a, b, c; cin >> a >> b >> c;

        if(a == 1) {
            int d; cin >> d;

            for(int i=b; i<=b+1; i++)
                for(int j=c; j<=c+1; j++)
                    if(!u[i][j]) v[i][j] = d;
        }
        else {
            for(int i=b; i<=b+1; i++)
                for(int j=c; j<=c+1; j++) u[i][j] = true;
        }
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) cout << v[i][j] << " ";
        cout << "\n";
    }
}
