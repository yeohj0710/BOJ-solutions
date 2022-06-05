#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M, K; cin >> M >> N >> K;
        if(N == 0 && M == 0 && K == 0) break;

        vector<vector<int>> v(N, vector<int>(M));

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) cin >> v[i][j];

        int ans = 0;
        for(int i=0; i<M; i++) {
            int cnt = 0;
            for(int j=0; j<N; j++) {
                if(v[j][i] == 1) cnt++;
                else {
                    if(cnt >= K) ans++;
                    cnt = 0;
                }
            }
            if(cnt >= K) ans++;
        }

        cout << ans << "\n";
    }
}
