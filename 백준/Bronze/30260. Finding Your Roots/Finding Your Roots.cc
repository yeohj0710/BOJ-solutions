#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Data Set " << t << ":\n";

        int N, M; cin >> M >> N;

        vector<int> v(N+1);

        for(int i=1; i<=N; i++) cin >> v[i];

        int ans = 1, cur = M;

        while(true) {
            if(v[cur] == 0) break;

            cur = v[cur];
            ans++;
        }

        cout << ans << "\n\n";
    }
}
