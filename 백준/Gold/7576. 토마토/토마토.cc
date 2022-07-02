#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> M >> N;

    vector<vector<int>> v(N, vector<int>(M));
    vector<vector<int>> cnt(N, vector<int>(M, -1));

    queue<pair<int, int>> q;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> v[i][j];

            if(v[i][j] == 1) {
                cnt[i][j] = 0;
                q.push({i, j});
            }
        }

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(v[nx][ny] != 0 || cnt[nx][ny] != -1) continue;

            cnt[nx][ny] = cnt[x][y] + 1;
            q.push({nx, ny});
        }
    }

    bool check = true;
    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            ans = max(ans, cnt[i][j]);
            if(v[i][j] == 0 && cnt[i][j] == -1) check = false;
        }

    if(check) cout << ans << "\n";
    else cout << -1 << "\n";
}
