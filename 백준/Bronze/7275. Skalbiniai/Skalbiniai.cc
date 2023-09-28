#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<int>> v(M);

    for(int i=0; i<M; i++) {
        int x; cin >> x;

        while(x--) {
            int y; cin >> y;

            v[i].push_back(y);
        }
    }

    vector<int> u(N+1);

    for(int i=1; i<=N; i++) cin >> u[i];

    int ans = 0;

    for(int i=0; i<M; i++) {
        int sum = 0;

        for(int j=0; j<v[i].size(); j++) sum += u[v[i][j]];

        if(sum == 0) ans += 0;
        else ans += (sum - 1) / K + 1;
    }

    cout << ans << "\n";
}
