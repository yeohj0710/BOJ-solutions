#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<vector<int>> v;
vector<vector<vector<int>>> dp;

int f(int x, int y, int dir) {
    if(y < 0 || y >= M) return INT_MAX;
    if(x == N-1) return v[x][y];
    if(dp[x][y][dir] != INT_MAX) return dp[x][y][dir];

    int dy[4] = {0, -1, 0, 1};

    for(int i=1; i<=3; i++) {
        if(i == dir) continue;
        dp[x][y][dir] = min(dp[x][y][dir], v[x][y] + f(x+1, y+dy[i], i));
    }

    return dp[x][y][dir];
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N, vector<int>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    dp.resize(N, vector<vector<int>>(M, vector<int>(4, INT_MAX)));

    int ans = INT_MAX;
    for(int i=0; i<M; i++) ans = min(ans, f(0, i, 0));

    cout << ans << "\n";
}
