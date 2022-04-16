#include <bits/stdc++.h>
#define MAX 301
using namespace std;

int N, M;
int arr[MAX][MAX], melt[MAX][MAX];
bool vis[MAX][MAX];

void DFS(int x, int y) {
    vis[x][y] = true;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

        if(arr[nx][ny] > 0 && !vis[nx][ny]) DFS(nx, ny);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> arr[i][j];

    int year = 0;
    bool all_melt;

    while(true) {
        all_melt = true;
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(arr[i][j] > 0) all_melt = false;
        if(all_melt) break;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) vis[i][j] = false;

        int cnt = 0;
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(arr[i][j] > 0 && !vis[i][j]) {
                    DFS(i, j);
                    cnt++;
                }

        if(cnt >= 2) break;


        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) melt[i][j] = 0;

        int di[4] = {1, -1, 0, 0};
        int dj[4] = {0, 0, 1, -1};

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(arr[i][j] > 0) {
                    int melt_cnt = 0;

                    for(int k=0; k<4; k++) {
                        int ni = i + di[k];
                        int nj = j + dj[k];

                        if(ni < 0 || nj < 0 || ni >= N || nj >= M) continue;

                        if(arr[ni][nj] == 0) melt_cnt++;
                    }

                    melt[i][j] = melt_cnt;
                }

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                arr[i][j] = max(arr[i][j] - melt[i][j], 0);

        year++;
    }

    if(all_melt) cout << "0\n";
    else cout << year << "\n";
}
