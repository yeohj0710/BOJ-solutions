#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        vector<vector<char>> v(5, vector<char>(5));

        for(int i=0; i<5; i++)
            for(int j=0; j<5; j++) cin >> v[i][j];

        bool flag = true;

        for(int i=0; i<5; i++)
            for(int j=0; j<5; j++) {
                if(v[i][j] != 'k') continue;

                int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
                int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

                bool chk = true;

                for(int k=0; k<8; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];

                    if(nx < 0 || ny < 0 || nx >= 5 || ny >= 5) continue;
                    if(v[nx][ny] == 'k') {
                        chk = false;
                        break;
                    }
                }

                if(!chk) flag = false;
            }

        if(flag) cout << "valid\n";
        else cout << "invalid\n";
    }
}
