#include <bits/stdc++.h>
#define int long long
using namespace std;

// referred solution for study

int N, M;
int v[1001][1001] = {}, dp[1001][1001][3] = {};

int f(int x, int y, int dir) {
    if(x < 1 || x > N || y < 1 || y > M) return INT_MIN;

    int &ret = dp[x][y][dir];

    if(ret != -1) return ret;

    if(x == N && y == M) ret = v[x][y];
    else if(dir == 0) ret = v[x][y] + max({f(x+1, y, 0), f(x, y-1, 1), f(x, y+1, 2)});
    else if(dir == 1) ret = v[x][y] + max(f(x+1, y, 0), f(x, y-1, 1));
    else if(dir == 2) ret = v[x][y] + max(f(x+1, y, 0), f(x, y+1, 2));

    return ret;
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    memset(dp, -1, sizeof(dp));

    cin >> N >> M;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) cin >> v[i][j];

    cout << f(1, 1, 0) << "\n";
}
