#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int N, M;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int arr[MAX][MAX], vis[MAX][MAX];

void clear_vis() {
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) vis[i][j] = 0;
}

int color = 2;
void coloring(int x, int y) {
    vis[x][y] = 1;
    arr[x][y] = color;

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(vis[nx][ny] == 0 && arr[nx][ny] == 1) coloring(nx, ny);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            char c; cin >> c;
            if(c == 'X') arr[i][j] = 1;
            else arr[i][j] = 0;
        }

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(arr[i][j] == 1) {
                clear_vis();
                coloring(i, j);
                color++;
            }

    int ans = INT_MAX;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(arr[i][j] != 0) {
                clear_vis();
                queue<pair<int, int>> q;
                int curr_color = arr[i][j];

                for(int k=0; k<4; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];

                    if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

                    if(arr[nx][ny] == 0) {
                        q.push({nx, ny});
                        vis[nx][ny] = 1;
                    }
                }

                while(!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    for(int k=0; k<4; k++) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];

                        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

                        if(arr[nx][ny] != 0 && arr[nx][ny] != curr_color && vis[nx][ny] == 0) {
                            vis[nx][ny] = vis[x][y] + 1;
                            ans = min(ans, vis[x][y]);
                        }

                        if(arr[nx][ny] == 0 && vis[nx][ny] == 0) {
                            vis[nx][ny] = vis[x][y] + 1;
                            q.push({nx, ny});
                        }
                    }
                }
            }

    cout << ans;
}
