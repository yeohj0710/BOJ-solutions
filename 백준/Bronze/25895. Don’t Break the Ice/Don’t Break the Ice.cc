#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> N >> M;

        vector<vector<bool>> v(N+1, vector<bool>(N+1, true));

        int ans = 0;

        while(M--) {
            int a, b; cin >> a >> b;

            if(!v[a][b]) {
                ans++;
                continue;
            }

            v[a][b] = false;

            for(int i=1; i<=N; i++)
                for(int j=1; j<=N; j++) {
                    bool check = false;

                    bool flag = true;
                    for(int k=1; k<=N; k++)
                        if(!v[k][j]) flag = false;

                    if(flag) check = true;

                    flag = true;
                    for(int k=1; k<=N; k++)
                        if(!v[i][k]) flag = false;

                    if(flag) check = true;

                    if(!check) v[i][j] = false;
                }
        }

        cout << "Strategy #" << t << ": " << ans << "\n";
        cout << "\n";
    }
}
