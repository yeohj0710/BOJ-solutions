#include <bits/stdc++.h>
#define MAX 301
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int L; cin >> L;
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        queue<pair<int, int>> Queue;
        Queue.push({x1, y1});

        bool Visit[MAX][MAX] = {};
        Visit[x1][y1] = true;

        int ans[MAX][MAX] = {};
        int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
        int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

        while(!Queue.empty()) {
            int x = Queue.front().first;
            int y = Queue.front().second;
            Queue.pop();

            if(x == x2 && y == y2) {
                cout << ans[x][y] << "\n";
                break;
            }

            for(int i=0; i<8; i++) {
                int nx = x + dx[i], ny = y + dy[i];
                if(nx >= 0 && ny >= 0 && nx < L && ny < L && !Visit[nx][ny]) {
                    Queue.push({nx, ny});
                    Visit[nx][ny] = true;
                    ans[nx][ny] = ans[x][y] + 1;
                }
            }
        }
    }
}
