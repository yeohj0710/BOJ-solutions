#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        vector<vector<bool>> v(3, vector<bool>(3));

        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) {
                char ch; cin >> ch;

                if(ch == 'H') v[i][j] = true;
                else v[i][j] = false;
            }

        int ans = INT_MAX;

        for(int i=0; i<(1<<8); i++) {
            vector<vector<bool>> u(v);

            int cnt = 0;

            for(int j=0; j<8; j++) {
                if(!((i >> j) & 1)) continue;

                cnt++;

                if(j < 3) {
                    for(int k=0; k<3; k++) u[j][k] = !u[j][k];
                }
                else if(j < 6) {
                    for(int k=0; k<3; k++) u[k][j-3] = !u[k][j-3];
                }
                else if(j == 6) {
                    for(int k=0; k<3; k++) u[k][k] = !u[k][k];
                }
                else if(j == 7) {
                    for(int k=0; k<3; k++) u[k][2-k] = !u[k][2-k];
                }
            }

            bool chk = true;

            for(int j=0; j<3; j++)
                for(int k=0; k<3; k++)
                    if(u[j][k] != u[0][0]) chk = false;

            if(chk) ans = min(ans, cnt);
        }

        if(ans != INT_MAX) cout << ans << "\n";
        else cout << -1 << "\n";
    }
}
