#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<vector<char>> v;
vector<vector<bool>> vis;

void f(int x, int y) {
    vis[x][y] = true;

    if(v[x][y] == '-') {
        if(y-1 >= 0 && v[x][y-1] == '-' && !vis[x][y-1]) f(x, y-1);
        if(y+1 < M && v[x][y+1] == '-' && !vis[x][y+1]) f(x, y+1);
    }
    else {
        if(x-1 >= 0 && v[x-1][y] == '|' && !vis[x-1][y]) f(x-1, y);
        if(x+1 < N && v[x+1][y] == '|' && !vis[x+1][y]) f(x+1, y);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;
    cin.ignore();

    v.resize(N, vector<char>(M));
    vis.resize(N, vector<bool>(M, false));

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> v[i][j];
        cin.ignore();
    }

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(!vis[i][j]) {
                f(i, j);
                ans++;
            }

    cout << ans << "\n";
}
