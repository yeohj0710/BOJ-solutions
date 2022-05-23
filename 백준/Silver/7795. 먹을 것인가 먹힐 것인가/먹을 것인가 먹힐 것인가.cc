#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<int> u(N), v(M);
        for(int i=0; i<N; i++) cin >> u[i];
        for(int i=0; i<M; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int ans = 0;

        for(int i=0; i<u.size(); i++)
            ans += lower_bound(v.begin(), v.end(), u[i]) - v.begin();

        cout << ans << "\n";
    }
}
