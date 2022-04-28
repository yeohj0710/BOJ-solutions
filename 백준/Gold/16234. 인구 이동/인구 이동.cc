#include <bits/stdc++.h>
using namespace std;

const int MAX = 51;

int N, L, R;
int arr[MAX][MAX], check[MAX][MAX];
int check_num;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void DFS(int x, int y) {
    check[x][y] = check_num;

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
        if(check[nx][ny] != -1) continue;

        int diff = abs(arr[x][y] - arr[nx][ny]);
        if(diff >= L && diff <= R) DFS(nx, ny);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> L >> R;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> arr[i][j];

    int day = 0;
    while(true) {
        bool open = false;
        memset(check, -1, sizeof(check));
        check_num = 1;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                for(int k=0; k<4; k++) {
                    if(check[i][j] != -1) break;

                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if(ni < 0 || nj < 0 || ni >= N || nj >= N) continue;

                    int diff = abs(arr[i][j] - arr[ni][nj]);
                    if(diff >= L && diff <= R) {
                        DFS(i, j);
                        check_num++;
                        open = true;
                    }
                }
        if(!open) break;

        for(int k=1; k<check_num; k++) {
            int sum = 0, cnt = 0;

            for(int i=0; i<N; i++)
                for(int j=0; j<N; j++)
                    if(check[i][j] == k) {
                        sum += arr[i][j];
                        cnt++;
                    }

            for(int i=0; i<N; i++)
                for(int j=0; j<N; j++)
                    if(check[i][j] == k) arr[i][j] = sum/cnt;
        }

        day++;
    }

    cout << day << "\n";
}
