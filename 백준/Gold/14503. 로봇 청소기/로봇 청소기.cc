#include <bits/stdc++.h>
#define MAX 51
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    int x, y, d; cin >> x >> y >> d;

    int arr[MAX][MAX];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> arr[i][j];

    int ans = 0;
    bool visited[MAX][MAX] = {};

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    while(true) {
        if(!visited[x][y]) ans++;
        visited[x][y] = true;

        bool check = false;

        for(int i=0; i<4; i++) {
            int nx = x + dx[(d-i-1+4)%4];
            int ny = y + dy[(d-i-1+4)%4];

            if(visited[nx][ny] || arr[nx][ny] == 1) continue;

            check = true;
            x = nx;
            y = ny;
            d = (d-i-1+4)%4;
            break;
        }

        if(!check) {
            int nx = x + dx[(d+2)%4];
            int ny = y + dy[(d+2)%4];

            if(arr[nx][ny] == 0) {
                x = nx;
                y = ny;
            }
            else break;
        }
    }

    cout << ans;
}
