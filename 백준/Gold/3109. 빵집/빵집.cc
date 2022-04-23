#include <bits/stdc++.h>
using namespace std;

int R, C;
char arr[10001][501];
bool vis[10001][501] = {};

bool check;
int ans = 0;

void DFS(int x, int y) {
    vis[x][y] = true;

    if(y == C-1) {
        ans++;
        check = true;
        return;
    }

    int dx[3] = {-1, 0, 1};
    int dy[3] = {1, 1, 1};

    for(int i=0; i<3; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= R || ny >= C) continue;

        if(arr[nx][ny] == '.' && !vis[nx][ny]) {
            DFS(nx, ny);
            if(check) return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> R >> C;
    cin.ignore();

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) cin >> arr[i][j];
        cin.ignore();
    }

    for(int i=0; i<R; i++) {
        check = false;
        DFS(i, 0);
    }

    cout << ans << "\n";
}
