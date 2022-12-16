#include <bits/stdc++.h>
#define int long long
using namespace std;

int ans = 0;

void f(int idx, vector<vector<int>> &v) {
    if(idx == 10) {
        ans++;
        return;
    }

    int x = (idx - 1) / 3 + 1;
    int y = (idx - 1) % 3 + 1;

    if(v[x][y] != 0) {
        f(idx+1, v);
        return;
    }

    for(int i=1; i<=9; i++) {
        bool check = true;

        int dx[8] = {1, 2, -1, -2, 0, 0, 0, 0};
        int dy[8] = {0, 0, 0, 0, 1, 2, -1, -2};

        for(int j=0; j<8; j++) {
            int nx = x + dx[j];
            int ny = y + dy[j];

            if(nx < 1 || ny < 1 || nx > 3 || ny > 3) continue;
            if(v[nx][ny] == i) check = false;
        }

        if(check) {
            v[x][y] = i;
            f(idx+1, v);
            v[x][y] = 0;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    vector<vector<int>> v(4, vector<int>(4));

    for(int i=1; i<=3; i++)
        for(int j=1; j<=3; j++) cin >> v[i][j];

    f(1, v);

    cout << ans << "\n";
}
