#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<vector<char>> v;
vector<vector<bool>> vis;

void f(int x, int y) {
    vis[x][y] = true;

    int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

    for(int i=0; i<8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
        if(v[nx][ny] != '1' || vis[nx][ny]) continue;

        f(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t = 1;

    while(cin >> N) {
        v.clear();
        v.resize(N, vector<char>(N));

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> v[i][j];

        vis.clear();
        vis.resize(N, vector<bool>(N));

        int ans = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(v[i][j] == '1' && !vis[i][j]) {
                    f(i, j);
                    ans++;
                }

        cout << "Case #" << t << ": " << ans << "\n";

        t++;
    }
}
