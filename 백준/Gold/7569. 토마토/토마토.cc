#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int Map[MAX][MAX][MAX];
bool Visit[MAX][MAX][MAX] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int M, N, H; cin >> M >> N >> H;

    int cnt = 0;
    queue<tuple<int, int, int>> Queue;

    for(int i=0; i<H; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<M; k++) {
                cin >> Map[i][j][k];

                if(Map[i][j][k] == 0) cnt++;
                if(Map[i][j][k] == 1) {
                    Queue.push({i, j, k});
                    Visit[i][j][k] = true;
                }
            }

    if(cnt == 0) {
        cout << "0";
        return 0;
    }

    int dx[] = {1, -1, 0, 0, 0, 0};
    int dy[] = {0, 0, 1, -1, 0, 0};
    int dz[] = {0, 0, 0, 0, 1, -1};
    int day = 0;

    while(!Queue.empty()) {
        int Size = Queue.size();
        for(int i=0; i<Size; i++) {
            int x = get<0>(Queue.front());
            int y = get<1>(Queue.front());
            int z = get<2>(Queue.front());
            Queue.pop();

            for(int j=0; j<6; j++) {
                int nx = x + dx[j], ny = y + dy[j], nz = z + dz[j];
                if(nx >= 0 && ny >= 0 && nz >= 0 && nx < H && ny < N && nz < M
                   && Map[nx][ny][nz] == 0 && !Visit[nx][ny][nz]) {
                    Queue.push({nx, ny, nz});
                    Visit[nx][ny][nz] = true;
                    cnt--;
                }
            }
        }
        day++;
    }

    if(cnt != 0) cout << "-1";
    else cout << day - 1;
}
