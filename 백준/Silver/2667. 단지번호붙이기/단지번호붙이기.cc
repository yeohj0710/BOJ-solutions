#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, cnt;
vector<vector<char>> v;
vector<vector<bool>> vis;

void DFS(int x, int y) {
    vis[x][y] = true;
    cnt++;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
        if(vis[nx][ny] || v[nx][ny] != v[x][y]) continue;

        DFS(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N, vector<char>(N));
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    vis.resize(N, vector<bool>(N));
    vector<int> ans;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(v[i][j] > '0' && !vis[i][j]) {
                cnt = 0;
                DFS(i, j);
                ans.push_back(cnt);
            }

    sort(ans.begin(), ans.end());

    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++) cout << ans[i] << "\n";
}
