#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(v[i][j] != '+') continue;

            int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
            int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
            string s = "|/-\\|/-\\";

            for(int k=1; ; k++) {
                bool chk = true;

                for(int l=0; l<8; l++) {
                    int nx = i + dx[l] * k;
                    int ny = j + dy[l] * k;

                    if(nx < 0 || ny < 0 || nx >= N || ny >= M) {
                        chk = false;
                        break;
                    }

                    if(v[nx][ny] != s[l]) {
                        chk = false;
                        break;
                    }
                }

                if(chk) ans = max(ans, k);
                else break;
            }
        }

    cout << ans << "\n";
}
