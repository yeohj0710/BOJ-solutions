#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int N;
char arr1[MAX][MAX], arr2[MAX][MAX];
bool visit1[MAX][MAX] = {}, visit2[MAX][MAX] = {};

void DFS(int x, int y, int mode) {
    if(mode == 1) visit1[x][y] = true;
    else visit2[x][y] = true;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;

        if(mode == 1 && !visit1[nx][ny] && arr1[nx][ny] == arr1[x][y]) DFS(nx, ny, 1);
        if(mode == 2 && !visit2[nx][ny] && arr2[nx][ny] == arr2[x][y]) DFS(nx, ny, 2);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin >> arr1[i][j];

            if(arr1[i][j] == 'R') arr2[i][j] = 'G';
            else arr2[i][j] = arr1[i][j];
        }
        cin.ignore();
    }

    int cnt1 = 0, cnt2 = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            if(!visit1[i][j]) {
                DFS(i, j, 1);
                cnt1++;
            }
            if(!visit2[i][j]) {
                DFS(i, j, 2);
                cnt2++;
            }
        }

    cout << cnt1 << " " << cnt2;
}
