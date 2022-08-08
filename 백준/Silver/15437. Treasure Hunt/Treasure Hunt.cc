#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int x = 0, y = 0, ans = 0;

    vector<vector<bool>> vis(N, vector<bool>(M));

    while(true) {
        if(x < 0 || y < 0 || x >= N || y >= M) {
            cout << "Out\n";
            break;
        }

        if(vis[x][y]) {
            cout << "Lost\n";
            break;
        }

        vis[x][y] = true;

        if(v[x][y] == 'T') {
            cout << ans << "\n";
            break;
        }

        if(v[x][y] == 'E') y++;
        else if(v[x][y] == 'S') x++;
        else if(v[x][y] == 'W') y--;
        else if(v[x][y] == 'N') x--;

        ans++;
    }
}
