#include <bits/stdc++.h>
using namespace std;

const int MAX = 21;
typedef pair<int, pair<int, int>> Pair;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int arr[MAX][MAX];
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> arr[i][j];

    int time = 0, shark = 2, eat = 0;
    while(true) {
        bool check = false;
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(arr[i][j] != 0 && arr[i][j] < shark) check = true;
        if(!check) break;

        queue<pair<int, int>> Q;
        int dist[MAX][MAX];
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) dist[i][j] = -1;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(arr[i][j] == 9) {
                    Q.push({i, j});
                    arr[i][j] = 0;
                    dist[i][j] = 0;
                }

        int dx[4] = {-1, 0, 0, 1};
        int dy[4] = {0, -1, 1, 0};

        priority_queue<Pair, vector<Pair>, greater<Pair>> PQ; // <distance, <x, y>>

        while(!Q.empty()) {
            int x = Q.front().first;
            int y = Q.front().second;
            Q.pop();

            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
                if(dist[nx][ny] != -1 || arr[nx][ny] > shark) continue;

                Q.push({nx, ny});
                dist[nx][ny] = dist[x][y] + 1;

                if(arr[nx][ny] != 0 && arr[nx][ny] < shark) PQ.push({dist[nx][ny], {nx, ny}});
            }
        }

        if(PQ.empty()) break;

        eat++;
        if(eat == shark) {
            shark++;
            eat = 0;
        }

        int x = PQ.top().second.first;
        int y = PQ.top().second.second;

        arr[x][y] = 9;
        time += dist[x][y];
    }

    cout << time << "\n";
}
