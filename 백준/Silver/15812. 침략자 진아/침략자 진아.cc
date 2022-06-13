#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> v[i][j];
        cin.ignore();
    }

    int ans = INT_MAX;
    for(int i=0; i<N*M; i++)
        for(int j=i+1; j<N*M; j++) {
            if(v[i/M][i%M] == '1' || v[j/M][j%M] == '1') continue;

            vector<vector<int>> cnt(N, vector<int>(M, -1));
            cnt[i/M][i%M] = cnt[j/M][j%M] = 0;

            queue<pair<int, int>> q;
            q.push({i/M, i%M});
            q.push({j/M, j%M});

            while(!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();

                int dx[4] = {1, -1, 0, 0};
                int dy[4] = {0, 0, 1, -1};

                for(int k=0; k<4; k++) {
                    int nx = x + dx[k];
                    int ny = y + dy[k];

                    if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                    if(cnt[nx][ny] != -1) continue;

                    q.push({nx, ny});
                    cnt[nx][ny] = cnt[x][y] + 1;
                }
            }

            int Max = 0;
            for(int k=0; k<N; k++)
                for(int l=0; l<M; l++)
                    if(v[k][l] == '1') Max = max(Max, cnt[k][l]);

            ans = min(ans, Max);
        }

    cout << ans << "\n";
}
