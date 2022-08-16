#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int cnt = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            bool check = true;

            int di[4] = {1, -1, 0, 0};
            int dj[4] = {0, 0, 1, -1};

            for(int k=0; k<4; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];

                if(ni < 0 || nj < 0 || ni >= N || nj >= M) continue;

                if(v[ni][nj] != v[i][j]) check = false;
            }

            if(check) cnt++;
        }

    int ans = 1, ba = 2, ex = cnt, mod = 1e9 + 7;

    while(ex > 0) {
        if(ex % 2 == 1) ans = (ans * ba) % mod;

        ba = (ba * ba) % mod;
        ex /= 2;
    }

    cout << ans << "\n";
}
