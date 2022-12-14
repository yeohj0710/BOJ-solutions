#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
            int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

            for(int k=0; k<8; k++) {
                string str = "";

                for(int l=0; l<4; l++) {
                    int x = i + dx[k] * l;
                    int y = j + dy[k] * l;

                    if(x < 0 || y < 0 || x >= N || y >= M) break;

                    str += v[x][y];
                }

                if(str.length() < 4) continue;

                if((str[0] == 'E' || str[0] == 'I')
                   && (str[1] == 'N' || str[1] == 'S')
                   && (str[2] == 'F' || str[2] == 'T')
                   && (str[3] == 'P' || str[3] == 'J')) ans++;
            }
        }

    cout << ans << "\n";
}
