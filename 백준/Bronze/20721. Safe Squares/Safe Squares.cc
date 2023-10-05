#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<vector<char>> v(8, vector<char>(8));

    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++) cin >> v[i][j];

    int ans = 0;

    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++) {
            if(v[i][j] == 'R') continue;

            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};

            bool chk = true;

            for(int k=0; k<4; k++) {
                int x = i, y = j;

                while(true) {
                    x += dx[k], y += dy[k];

                    if(x < 0 || x >= 8 || y < 0 || y >= 8) break;
                    if(v[x][y] == 'R') chk = false;
                }
            }

            if(chk) ans++;
        }

    cout << ans << "\n";
}
