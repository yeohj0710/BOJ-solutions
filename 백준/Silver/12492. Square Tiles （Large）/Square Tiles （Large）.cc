#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ":\n";

        int n, m; cin >> n >> m;

        vector<vector<char>> v(n, vector<char>(m));

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++) cin >> v[i][j];

        bool chk = true;

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++) {
                if(v[i][j] != '#') continue;

                if(i+1 >= n || j+1 >= m) {
                    chk = false;
                    continue;
                }

                if(v[i][j+1] != '#' || v[i+1][j] != '#' || v[i+1][j+1] != '#') {
                    chk = false;
                    continue;
                }

                v[i][j] = '/', v[i][j+1] = '\\', v[i+1][j] = '\\', v[i+1][j+1] = '/';
            }

        if(!chk) {
            cout << "Impossible\n";
            continue;
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) cout << v[i][j];
            cout << "\n";
        }
    }
}
