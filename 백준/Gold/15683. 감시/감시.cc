#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
struct s { int t, x, y; };
vector<s> u;
vector<int> w;
vector<vector<int>> vv;

void f(int x, int y, int dir) {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    while(true) {
        x += dx[dir], y += dy[dir];

        if(x < 0 || y < 0 || x >= N || y >= M) break;
        if(vv[x][y] == 6) break;

        vv[x][y] = -1;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> v[i][j];

            if(v[i][j] >= 1 && v[i][j] <= 5) u.push_back({v[i][j], i, j});
        }

    w.resize(u.size());

    int ans = N*M;

    for(int i=0; i<pow(4, w.size()); i++) {
        int temp = i;

        for(int j=w.size()-1; j>=0; j--) {
            w[j] = temp % 4;

            temp /= 4;
        }

        vv.clear();
        vv = v;

        for(int j=0; j<u.size(); j++) {
            int x = u[j].x, y = u[j].y, t = u[j].t;

            if(t == 1) f(x, y, w[j]);
            else if(t == 2) {
                f(x, y, w[j]);
                f(x, y, (w[j] + 2) % 4);
            }
            else if(t == 3) {
                f(x, y, w[j]);
                f(x, y, (w[j] + 1) % 4);
            }
            else if(t == 4) {
                f(x, y, w[j]);
                f(x, y, (w[j] + 1) % 4);
                f(x, y, (w[j] + 2) % 4);
            }
            else if(t == 5) {
                f(x, y, w[j]);
                f(x, y, (w[j] + 1) % 4);
                f(x, y, (w[j] + 2) % 4);
                f(x, y, (w[j] + 3) % 4);
            }
        }

        int cnt = 0;

        for(int j=0; j<N; j++)
            for(int k=0; k<M; k++)
                if(vv[j][k] == 0) cnt++;

        ans = min(ans, cnt);
    }

    cout << ans << "\n";
}
