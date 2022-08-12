#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<int>> v(N, vector<int>(M));

    int r = -1;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> v[i][j];

            if(v[i][j] == -1 && r == -1) r = i;
        }

    while(K--) {
        vector<vector<int>> u(N, vector<int>(M));

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) {
                if(v[i][j] == -1) continue;

                int cnt = 0;

                int di[4] = {1, -1, 0, 0};
                int dj[4] = {0, 0, 1, -1};

                for(int k=0; k<4; k++) {
                    int ni = i + di[k];
                    int nj = j + dj[k];

                    if(ni < 0 || nj < 0 || ni >= N || nj >= M) continue;
                    if(v[ni][nj] == -1) continue;

                    u[ni][nj] += v[i][j] / 5;
                    cnt++;
                }

                u[i][j] -= cnt * (v[i][j] / 5);
            }

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) v[i][j] += u[i][j];

        for(int i=r-1; i>0; i--) v[i][0] = v[i-1][0];
        for(int i=0; i<M-1; i++) v[0][i] = v[0][i+1];
        for(int i=0; i<r; i++) v[i][M-1] = v[i+1][M-1];
        for(int i=M-1; i>1; i--) v[r][i] = v[r][i-1];

        v[r][1] = 0;

        for(int i=r+2; i<N-1; i++) v[i][0] = v[i+1][0];
        for(int i=0; i<M-1; i++) v[N-1][i] = v[N-1][i+1];
        for(int i=N-1; i>r+1; i--) v[i][M-1] = v[i-1][M-1];
        for(int i=M-1; i>1; i--) v[r+1][i] = v[r+1][i-1];

        v[r+1][1] = 0;
    }

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] != -1) ans += v[i][j];

    cout << ans << "\n";
}
