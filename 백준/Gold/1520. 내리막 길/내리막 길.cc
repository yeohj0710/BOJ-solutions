#include <bits/stdc++.h>
#define MAX 500
using namespace std;

int N, M;
int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
int Map[MAX][MAX], dp[MAX][MAX];

int Search(int x, int y) {
    if(x == N-1 && y == M-1) return 1;
    if(dp[x][y] != -1) return dp[x][y];

    dp[x][y] = 0;
    for(int i=0; i<4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if(nx >= 0 && ny >= 0 && nx < N && ny < M && Map[nx][ny] < Map[x][y])
            dp[x][y] += Search(nx, ny);
    }
    return dp[x][y];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> Map[i][j];
            dp[i][j] = -1;
        }

    cout << Search(0, 0);
}
