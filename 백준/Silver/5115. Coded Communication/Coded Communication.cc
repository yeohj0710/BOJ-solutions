#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> N >> M;

        vector<string> v(N+1);
        for(int i=0; i<N+1; i++) cin >> v[i];

        int ans = INT_MAX;
        for(int i=0; i<N; i++) {
            int cnt = 0;
            for(int j=0; j<v[i].length(); j++)
                if(v[N][j] != v[i][j]) cnt++;

            ans = min(ans, cnt);
        }

        cout << "Data Set " << t << ":\n";
        cout << ans << "\n\n";
    }
}
