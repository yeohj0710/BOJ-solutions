#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<vector<int>> v, u;
int a = -1, b = -1, from, to;

void f(int x, int y) {
    v[x][y] = to;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(v[nx][ny] != from) continue;

        f(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N, vector<int>(M));
    u.resize(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> u[i][j];

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] != u[i][j]) {
                a = i, b = j;
                from = v[i][j], to = u[i][j];
            }

    if(a != -1 && b != -1) f(a, b);

    bool check = true;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] != u[i][j]) check = false;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
