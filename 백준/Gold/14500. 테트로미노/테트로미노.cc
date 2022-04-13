#include <bits/stdc++.h>
#define MAX 501
using namespace std;

int N, M;
int arr[MAX][MAX];
bool visited[MAX][MAX] = {};

int DFS(int x, int y, int cnt) {
    if(cnt == 3) return arr[x][y];

    int sum = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

        if(!visited[nx][ny]) {
            visited[nx][ny] = true;
            sum = max(sum, arr[x][y] + DFS(nx, ny, cnt+1));
            visited[nx][ny] = false;
        }
    }

    return sum;
}


int check_shape(int x, int y) {
    int dx[4][4] = {{0, 1, 1, 2}, {0, 1, 1, 1}, {0, 1, 1, 2}, {0, 0, 0, 1}};
    int dy[4][4] = {{0, 0, 1, 0}, {1, 0, 1, 2}, {1, 0, 1, 1}, {0, 1, 2, 1}};

    int ret = 0;
    for(int i=0; i<4; i++) {
        int sum = 0;
        for(int j=0; j<4; j++) {
            if(x + dx[i][j] < 0 || y + dy[i][j] < 0 || x + dx[i][j] >= N || y + dy[i][j] >= M) break;
            sum += arr[x + dx[i][j]][y + dy[i][j]];
        }
        ret = max(ret, sum);
    }

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> arr[i][j];

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            visited[i][j] = true;
            ans = max(ans, DFS(i, j, 0));
            visited[i][j] = false;

            ans = max(ans, check_shape(i, j));
        }

    cout << ans;
}
