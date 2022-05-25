#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX = 101;

int N, M;
char v[MAX][MAX];
bool vis[MAX][MAX];

void f(int x, int y) {
    vis[x][y] = true;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(v[nx][ny] != '1' || vis[nx][ny]) continue;

        f(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ":\n";

        cin >> N >> M;
        cin.ignore();

        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) cin >> v[i][j];
            cin.ignore();
        }

        int Q; cin >> Q;
        cin.ignore();

        while(Q--) {
            char c; cin >> c;
            cin.ignore();

            if(c == 'Q') {
                memset(vis, false, sizeof(vis));

                int ans = 0;

                for(int i=0; i<N; i++)
                    for(int j=0; j<M; j++)
                        if(v[i][j] == '1' && !vis[i][j]) {
                            f(i, j);
                            ans++;
                        }

                cout << ans << "\n";
            }
            else {
                int a, b, c; cin >> a >> b >> c;

                v[a][b] = char(c + '0');
            }
        }
    }
}
