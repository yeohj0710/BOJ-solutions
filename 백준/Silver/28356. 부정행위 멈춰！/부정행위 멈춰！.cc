#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int di[4] = {-1, -1, -1, 0}, dj[4] = {-1, 0, 1, -1};

    vector<vector<int>> v(N, vector<int>(M));
    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            vector<bool> u(5);

            for(int k=0; k<4; k++) {
                int ni = i + di[k], nj = j + dj[k];

                if(ni < 0 || nj < 0 || ni >= N || nj >= M) continue;

                u[v[ni][nj]] = true;
            }

            for(int k=1; k<=4; k++)
                if(!u[k]) {
                    v[i][j] = k;
                    ans = max(ans, k);
                    break;
                }
        }

    cout << ans << "\n";

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << v[i][j] << " ";
        cout << "\n";
    }
}
