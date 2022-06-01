#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int Q; cin >> Q;

    while(Q--) {
        vector<int> u(M);
        for(int i=0; i<M; i++) cin >> u[i];

        int ans = 0;
        for(int i=0; i<N; i++) {
            bool check = true;
            for(int j=0; j<M; j++) {
                if(u[j] == -1) continue;
                if(v[i][j] != u[j]) check = false;
            }
            if(check) ans++;
        }

        cout << ans << "\n";
    }
}
