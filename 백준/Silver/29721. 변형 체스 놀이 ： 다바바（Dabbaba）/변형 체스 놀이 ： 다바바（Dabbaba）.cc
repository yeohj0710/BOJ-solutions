#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    unordered_map<int, unordered_map<int, bool>> m;
    vector<pair<int, int>> v(M);

    for(int i=0; i<M; i++) {
        cin >> v[i].first >> v[i].second;

        m[v[i].first][v[i].second] = true;
    }

    int ans = 0;

    for(int i=0; i<M; i++) {
        int dx[4] = {-2, 2, 0, 0};
        int dy[4] = {0, 0, -2, 2};

        for(int j=0; j<4; j++) {
            int nx = v[i].first + dx[j];
            int ny = v[i].second + dy[j];

            if(nx < 1 || ny < 1 || nx > N || ny > N) continue;
            if(!m[nx][ny]) ans++;

            m[nx][ny] = true;
        }
    }

    cout << ans << "\n";
}
