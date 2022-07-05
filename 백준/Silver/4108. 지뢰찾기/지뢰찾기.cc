#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int di[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dj[8] = {-1, 0, 1, 1, 1, 0, -1 ,-1};

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<vector<char>> v(N, vector<char>(M));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) cin >> v[i][j];

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) {
                if(v[i][j] != '.') continue;

                int cnt = 0;

                for(int k=0; k<8; k++) {
                    int ni = i + di[k];
                    int nj = j + dj[k];

                    if(ni < 0 || nj < 0 || ni >= N || nj >= M) continue;
                    if(v[ni][nj] != '*') continue;

                    cnt++;
                }

                v[i][j] = char('0' + cnt);
            }

        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) cout << v[i][j];
            cout << "\n";
        }
    }
}
