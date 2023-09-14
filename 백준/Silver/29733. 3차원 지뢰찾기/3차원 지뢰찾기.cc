#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    int dx[26] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int dy[26] = {-1, -1, -1, 0, 0, 0, 1, 1, 1, -1, -1, -1, 0, 0, 1, 1, 1, -1, -1, -1, 0, 0, 0, 1, 1, 1};
    int dz[26] = {-1, 0, 1, -1, 0, 1, -1, 0, 1, -1, 0, 1, -1, 1, -1, 0, 1, -1, 0, 1, -1, 0, 1, -1, 0, 1};

    vector<vector<vector<char>>> v(K, vector<vector<char>>(N, vector<char>(M)));

    for(int i=0; i<K; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<M; k++) cin >> v[i][j][k];

    for(int i=0; i<K; i++)
        for(int j=0; j<N; j++) {
            for(int k=0; k<M; k++) {
                if(v[i][j][k] == '*') {
                    cout << "*";
                    continue;
                }

                int cnt = 0;

                for(int l=0; l<26; l++) {
                    int nx = i + dx[l];
                    int ny = j + dy[l];
                    int nz = k + dz[l];

                    if(nx < 0 || nx >= K || ny < 0 || ny >= N || nz < 0 || nz >= M) continue;
                    if(v[nx][ny][nz] == '*') cnt++;
                }

                cout << cnt % 10;
            }
            cout << "\n";
        }
}
