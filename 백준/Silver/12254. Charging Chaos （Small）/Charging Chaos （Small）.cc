#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n, m; cin >> n >> m;

        vector<vector<bool>> v(n, vector<bool>(m)), u(n, vector<bool>(m));

        for(int i=0; i<n; i++) {
            string s; cin >> s;

            for(int j=0; j<m; j++) v[i][j] = s[j] - '0';
        }

        for(int i=0; i<n; i++) {
            string s; cin >> s;

            for(int j=0; j<m; j++) u[i][j] = s[j] - '0';
        }

        sort(v.begin(), v.end());
        sort(u.begin(), u.end());

        int ans = INT_MAX;

        for(int i=0; i<n; i++) {
            vector<bool> w(n);
            int cnt = 0;

            for(int k=0; k<m; k++)
                if(v[i][k] != u[0][k]) {
                    w[k] = true;
                    cnt++;
                }

            vector<vector<bool>> vv(v);

            for(int k=0; k<n; k++)
                for(int l=0; l<m; l++)
                    if(w[l]) vv[k][l] = (vv[k][l] ? false : true);

            sort(vv.begin(), vv.end());

            if(vv == u) ans = min(ans, cnt);
        }

        if(ans != INT_MAX) cout << ans << "\n";
        else cout << "NOT POSSIBLE\n";
    }
}
