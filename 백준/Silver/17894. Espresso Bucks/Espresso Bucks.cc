#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(v[i][j] == '#') continue;

            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};

            bool chk = false;

            for(int k=0; k<4; k++) {
                int nx = i + dx[k];
                int ny = j + dy[k];

                if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                if(v[nx][ny] == 'E') chk = true;
            }

            if(!chk) v[i][j] = 'E';
        }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << v[i][j];
        cout << "\n";
    }
}
