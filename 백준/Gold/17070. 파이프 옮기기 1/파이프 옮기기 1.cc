#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, ans = 0;
vector<vector<int>> v;

void f(int x, int y, int dir) {
    if(x == N-1 && y == N-1) {
        ans++;
        return;
    }

    int dx[3] = {1, 0, 1};
    int dy[3] = {0, 1, 1};

    for(int i=0; i<3; i++) {
        if(dir == 0 && i == 1) continue;
        if(dir == 1 && i == 0) continue;

        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= N || ny >= N) continue;
        if(v[nx][ny] == 1) continue;

        if(i == 2 && (v[x+1][y] == 1 || v[x][y+1] == 1)) continue;

        f(nx, ny, i);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    f(0, 1, 1);

    cout << ans << "\n";
}
