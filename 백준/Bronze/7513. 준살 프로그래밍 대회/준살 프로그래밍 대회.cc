#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Scenario #" << t << ":\n";

        int N; cin >> N;

        vector<string> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int M; cin >> M;

        while(M--) {
            string ans = "";

            int K; cin >> K;

            while(K--) {
                int x; cin >> x;

                ans += v[x];
            }

            cout << ans << "\n";
        }

        cout << "\n";
    }
}
