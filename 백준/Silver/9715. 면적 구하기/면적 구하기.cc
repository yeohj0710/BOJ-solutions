#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<vector<int>> v(N, vector<int>(M));

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) {
                char c; cin >> c;
                v[i][j] = c - '0';
            }

        int ans = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(v[i][j] > 0) ans += 2;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) {
                if(j == 0 && j == M-1) ans += v[i][j] * 2;
                else if(j == 0) {
                    ans += v[i][j];
                    if(v[i][j] > v[i][j+1]) ans += v[i][j] - v[i][j+1];
                }
                else if(j == M-1) {
                    ans += v[i][j];
                    if(v[i][j] > v[i][j-1]) ans += v[i][j] - v[i][j-1];
                }
                else {
                    if(v[i][j] > v[i][j+1]) ans += v[i][j] - v[i][j+1];
                    if(v[i][j] > v[i][j-1]) ans += v[i][j] - v[i][j-1];
                }
            }

        for(int i=0; i<M; i++)
            for(int j=0; j<N; j++) {
                if(j == 0 && j == N-1) ans += v[j][i] * 2;
                else if(j == 0) {
                    ans += v[j][i];
                    if(v[j][i] > v[j+1][i]) ans += v[j][i] - v[j+1][i];
                }
                else if(j == N-1) {
                    ans += v[j][i];
                    if(v[j][i] > v[j-1][i]) ans += v[j][i] - v[j-1][i];
                }
                else {
                    if(v[j][i] > v[j+1][i]) ans += v[j][i] - v[j+1][i];
                    if(v[j][i] > v[j-1][i]) ans += v[j][i] - v[j-1][i];
                }
            }

        cout << ans << "\n";
    }
}
