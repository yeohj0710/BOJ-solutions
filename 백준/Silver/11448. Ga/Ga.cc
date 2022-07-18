#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<vector<char>> v(N, vector<char>(N));
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> v[i][j];

        vector<vector<bool>> vis(N, vector<bool>(N));

        int ans = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                if(v[i][j] != 'w' || vis[i][j]) continue;

                queue<pair<int, int>> q;
                q.push({i, j});

                while(!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
                    int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

                    for(int k=0; k<8; k++) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];

                        if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
                        if(v[nx][ny] != '-' || vis[nx][ny]) continue;

                        v[nx][ny] = 'w';
                        vis[nx][ny] = true;
                        q.push({nx, ny});
                        ans++;
                    }
                }
            }

        cout << ans << "\n";
    }
}
