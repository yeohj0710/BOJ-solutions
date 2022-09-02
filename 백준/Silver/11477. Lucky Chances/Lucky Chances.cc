#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            for(int k=0; k<4; k++) {
                bool check = true;

                int x = i, y = j;

                while(true) {
                    x += dx[k];
                    y += dy[k];

                    if(x < 0 || y < 0 || x >= N || y >= M) break;

                    if(v[x][y] >= v[i][j]) check = false;
                }

                if(check) ans++;
            }

    cout << ans << "\n";
}
