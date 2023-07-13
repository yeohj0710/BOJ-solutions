#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N), u(M);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    for(int i=0; i<M; i++) {
        int l = 0, r = N-1, idx = 0;

        while(l <= r) {
            int m = (l + r) / 2;

            if(v[m] >= u[i]) {
                idx = m;
                r = m - 1;
            }
            else l = m + 1;
        }

        int mn = abs(u[i] - v[idx]);

        if(idx-1 >= 0) mn = min(mn, abs(u[i] - v[idx-1]));
        if(idx+1 < N) mn = min(mn, abs(u[i] - v[idx+1]));

        cout << max(K - mn, (int)0) << "\n";
    }
 }
