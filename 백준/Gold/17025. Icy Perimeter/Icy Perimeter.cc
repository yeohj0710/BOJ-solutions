#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, a, b, ma = 0, mb = 0;
vector<vector<char>> v;
vector<vector<bool>> vis;

void f(int x, int y) {
    vis[x][y] = true;
    a++;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= N) {
            b++;
            continue;
        }
        if(v[nx][ny] != '#') {
            b++;
            continue;
        }
        if(vis[nx][ny]) continue;

        f(nx, ny);
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

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            if(v[i][j] != '#' || vis[i][j]) continue;

            a = 0, b = 0;

            f(i, j);

            if(a > ma || (a == ma && b < mb)) {
                ma = a;
                mb = b;
            }
        }

    cout << ma << " " << mb << "\n";
}
