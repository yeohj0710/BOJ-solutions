#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    vector<int> u;

    for(int i=0; i<N; i++) {
        int x = i, y = 0, dir = 0;

        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};

        bool chk = true;
        int cnt = 1e5;

        while(cnt--) {
            int val = v[x][y];
            x += dx[dir] * val;
            y += dy[dir] * val;

            if(x < 0 || y < 0 || x >= N || y >= M) {
                chk = false;
                break;
            }

            dir = (dir + 1) % 4;
        }

        if(chk) u.push_back(i+1);
    }

    cout << u.size() << "\n";

    for(int i=0; i<u.size(); i++) cout << u[i] << " ";
    cout << "\n";
}
