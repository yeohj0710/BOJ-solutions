#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<vector<char>>> v(N, vector<vector<char>>(5, vector<char>(5)));

    for(int i=0; i<N; i++)
        for(int j=0; j<5; j++)
            for(int k=0; k<5; k++) cin >> v[i][j][k];

    for(int t=1; t<=M; t++) {
        cout << "Data Set " << t << ":\n";

        vector<vector<char>> u(5, vector<char>(5));

        for(int i=0; i<5; i++)
            for(int j=0; j<5; j++) cin >> u[i][j];

        int mx = 0;

        for(int i=0; i<N; i++) {
            int cnt = 0;

            for(int j=0; j<5; j++)
                for(int k=0; k<5; k++)
                    if(u[j][k] == v[i][j][k]) cnt++;

            mx = max(mx, cnt);
        }

        for(int i=0; i<N; i++) {
            int cnt = 0;

            for(int j=0; j<5; j++)
                for(int k=0; k<5; k++)
                    if(u[j][k] == v[i][j][k]) cnt++;

            if(cnt == mx) cout << i + 1 << " ";
        }

        cout << "\n\n";
    }
}
