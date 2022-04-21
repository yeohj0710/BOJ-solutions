#include <bits/stdc++.h>
using namespace std;

const int MAX = 51;
const int MAXV = 11;

struct Point { int x, y; };
vector<Point> virus;

int N, M, ans = INT_MAX;
int arr[MAX][MAX];
bool active[MAXV] = {};

void f(int idx, int cnt) {
    if(cnt == M) {
        int cnt_ = 0;
        for(int i=0; i<virus.size(); i++)
            if(active[i]) cnt_++;
        if(cnt_ < M) return;

        queue<Point> Q;

        int time[MAX][MAX];
        memset(time, -1, sizeof(time));

        for(int i=0; i<virus.size(); i++)
            if(active[i]) {
                int x = virus[i].x;
                int y = virus[i].y;

                Q.push({x, y});
                time[x][y] = 0;
            }

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        while(!Q.empty()) {
            int x = Q.front().x;
            int y = Q.front().y;
            Q.pop();

            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
                if(arr[nx][ny] == 1 || time[nx][ny] != -1) continue;

                Q.push({nx, ny});
                time[nx][ny] = time[x][y] + 1;
            }
        }

        bool check = true;
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(arr[i][j] == 0 && time[i][j] == -1) check = false;
        if(!check) return;

        int total_time = 0;
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(arr[i][j] == 0) total_time = max(total_time, time[i][j]);

        ans = min(ans, total_time);

        return;
    }

    for(int i=idx; i<virus.size(); i++) {
        active[i] = true;
        f(i+1, cnt+1);
        active[i] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin >> arr[i][j];

            if(arr[i][j] == 2) virus.push_back({i, j});
        }

    f(0, 0);

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << "-1\n";
}
