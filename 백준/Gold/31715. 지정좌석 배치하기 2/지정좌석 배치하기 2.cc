#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> v[i][j];

            v[i][j] += K * (i + 1);
        }

        sort(v[i].begin(), v[i].end());
    }

    bool chk = true;

    for(int i=1; i<N; i++) {
        for(int j=0; j<M; j++)
            if(v[i][j] <= v[i-1][j]) chk = false;
    }

    if(!chk) {
        cout << 0 << "\n";
        return 0;
    }

    int ans = 1, mod = 1e9 + 7;

    for(int i=1; i<=M; i++) ans = (ans * i) % mod;

    for(int i=1; i<N; i++)
        for(int j=0; j<M; j++) {
            int cnt = lower_bound(v[i-1].begin(), v[i-1].end(), v[i][j]) - v[i-1].begin();

            ans = (ans * (cnt - j)) % mod;
        }

    cout << ans << "\n";
}
