#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int N;
int arr[MAX][MAX];
bool visited[MAX][MAX];

void DFS(int x, int y, int z) {
    visited[x][y] = true;

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;

        if(arr[nx][ny] > z && !visited[nx][ny]) DFS(nx, ny, z);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    int maxh = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin >> arr[i][j];
            maxh = max(maxh, arr[i][j]);
        }

    int ans = 0;
    for(int k=0; k<maxh; k++) {
        int cnt = 0;
        memset(visited, false, sizeof(visited));

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(arr[i][j] > k && !visited[i][j]) {
                    DFS(i, j, k);
                    cnt++;
                }

        ans = max(ans, cnt);
    }

    cout << ans;
}
