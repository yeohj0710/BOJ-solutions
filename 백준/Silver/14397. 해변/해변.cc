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

    int edx[6] = {-1, -1, 0, 0, 1, 1};
    int edy[6] = {-1, 0, -1, 1, -1, 0};

    int odx[6] = {-1, -1, 0, 0, 1, 1};
    int ody[6] = {0, 1, -1, 1, 0, 1};

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            for(int k=0; k<6; k++) {
                int nx, ny;

                if(i % 2 == 0) {
                    nx = i + edx[k];
                    ny = j + edy[k];
                }
                else {
                    nx = i + odx[k];
                    ny = j + ody[k];
                }

                if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

                if(v[i][j] != v[nx][ny]) ans++;
            }

    ans /= 2;

    cout << ans << "\n";
}
