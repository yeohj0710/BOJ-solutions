#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<vector<int>> v(N);
        vector<int> u(N);

        for(int i=0; i<N; i++) {
            int K; cin >> K;

            while(K--) {
                int x; cin >> x;

                v[i].push_back(x);
            }

            cin >> u[i];
        }

        vector<int> w(M+1);

        for(int i=1; i<=M; i++) cin >> w[i];

        int ans = 0;

        for(int i=0; i<N; i++) {
            while(true) {
                bool check = true;

                for(int j=0; j<v[i].size(); j++)
                    if(w[v[i][j]] == 0) check = false;

                if(check) {
                    for(int j=0; j<v[i].size(); j++) w[v[i][j]]--;

                    ans += u[i];
                }

                if(!check) break;
            }
        }

        cout << ans << "\n";
    }
}
