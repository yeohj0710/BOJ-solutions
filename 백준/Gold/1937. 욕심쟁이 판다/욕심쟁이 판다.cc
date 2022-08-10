#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<vector<int>> v, dp;

int f(int x, int y) {
    if(dp[x][y] > 0) return dp[x][y];

    dp[x][y] = 1;

    int Max = 0;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
        if(v[nx][ny] <= v[x][y]) continue;

        Max = max(Max, f(nx, ny));
    }

    return dp[x][y] = dp[x][y] + Max;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    int ans = 0;

    dp.resize(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) ans = max(ans, f(i, j));

    cout << ans << "\n";
}
