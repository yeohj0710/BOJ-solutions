#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<vector<int>> v(n, vector<int>(n));

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) cin >> v[i][j];

    for(int k=0; k<4; k++) {
        bool chk = true;

        for(int i=0; i<n; i++) {
            for(int j=1; j<n; j++) {
                if(v[i][j] < v[i][j-1]) chk = false;
                if(v[j][i] < v[j-1][i]) chk = false;
            }
        }

        if(chk) {
            cout << k << "\n";
            break;
        }

        vector<vector<int>> u(v);

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) u[i][j] = v[j][n-1-i];

        v = u;
    }
}
