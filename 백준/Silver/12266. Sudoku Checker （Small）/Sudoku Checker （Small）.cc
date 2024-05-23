#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n; cin >> n;

        vector<vector<int>> v(n*n, vector<int>(n*n));

        for(int i=0; i<n*n; i++)
            for(int j=0; j<n*n; j++) cin >> v[i][j];

        bool chk = true;

        for(int i=0; i<n*n; i++) {
            vector<bool> u(n*n + 1);

            for(int j=0; j<n*n; j++) {
                if(v[i][j] < 1 || v[i][j] > n*n) continue;

                u[v[i][j]] = true;
            }

            for(int j=1; j<=n*n; j++)
                if(!u[j]) chk = false;
        }

        for(int i=0; i<n*n; i++) {
            vector<bool> u(n*n + 1);

            for(int j=0; j<n*n; j++) {
                if(v[i][j] < 1 || v[i][j] > n*n) continue;

                u[v[j][i]] = true;
            }

            for(int j=1; j<=n*n; j++)
                if(!u[j]) chk = false;
        }

        for(int i=0; i<n*n; i+=n)
            for(int j=0; j<n*n; j+=n) {
                vector<bool> u(n*n + 1);

                for(int k=0; k<n; k++)
                    for(int l=0; l<n; l++) {
                        if(v[i+k][j+l] < 1 || v[i+k][j+l] > n*n) continue;

                        u[v[i+k][j+l]] = true;
                    }

                for(int k=1; k<=n*n; k++)
                if(!u[k]) chk = false;
            }


        if(chk) cout << "Yes\n";
        else cout << "No\n";
    }
}
