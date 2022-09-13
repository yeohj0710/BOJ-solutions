#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> M >> N;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};

            for(int k=0; k<4; k++) {
                int nx = i + dx[k];
                int ny = j + dy[k];

                if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

                if(v[i][j] != v[nx][ny]) ans++;
            }
        }

    ans /= 2;

    cout << ans << "\n";
}
