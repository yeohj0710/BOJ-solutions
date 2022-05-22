#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<vector<int>> v;
vector<vector<bool>> vis;
bool ans = false;

void f(int x, int y) {
    vis[x][y] = true;

    if(x == N-1 && y == N-1) {
        ans = true;
        return;
    }

    if(v[x][y] == 0) return;

    if(x + v[x][y] < N && !vis[x + v[x][y]][y]) f(x + v[x][y], y);
    if(y + v[x][y] < N && !vis[x][y + v[x][y]]) f(x, y + v[x][y]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N, vector<int>(N));
    vis.resize(N, vector<bool>(N, false));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    f(0, 0);

    if(ans) cout << "HaruHaru\n";
    else cout << "Hing\n";
}
