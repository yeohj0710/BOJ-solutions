#include <bits/stdc++.h>
using namespace std;

const int MAX = 21;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, x, y, K; cin >> N >> M >> x >> y >> K;

    int arr[MAX][MAX];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> arr[i][j];

    int dice[7] = {0, 0, 0, 0, 0, 0};
    int dx[5] = {0, 0, 0, -1, 1};
    int dy[5] = {0, 1, -1, 0, 0};

    for(int i=0; i<K; i++) {
        int dir; cin >> dir;

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        else x = nx, y = ny;

        if(dir == 1) {
            int temp[7] = {0, dice[4], dice[2], dice[1], dice[6], dice[5], dice[3]};
            copy(temp, temp+7, dice);
        }
        else if(dir == 2) {
            int temp[7] = {0, dice[3], dice[2], dice[6], dice[1], dice[5], dice[4]};
            copy(temp, temp+7, dice);
        }
        else if(dir == 3) {
            int temp[7] = {0, dice[5], dice[1], dice[3], dice[4], dice[6], dice[2]};
            copy(temp, temp+7, dice);
        }
        else if(dir == 4) {
            int temp[7] = {0, dice[2], dice[6], dice[3], dice[4], dice[1], dice[5]};
            copy(temp, temp+7, dice);
        }

        if(arr[x][y] == 0) arr[x][y] = dice[6];
        else dice[6] = arr[x][y], arr[x][y] = 0;

        cout << dice[1] << "\n";
    }
}
