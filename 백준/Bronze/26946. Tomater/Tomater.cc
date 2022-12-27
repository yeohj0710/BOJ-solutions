#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<bool> v(N+1);

    for(int i=0; i<3; i++) {
        int x; cin >> x;

        v[x] = true;
    }

    while(M--) {
        vector<bool> u(N+1);

        for(int i=1; i<=N; i++) {
            if(!v[i]) continue;

            if(i-1 >= 1) u[i-1] = true;
            if(i+1 <= N) u[i+1] = true;
        }

        for(int i=1; i<=N; i++)
            if(u[i]) v[i] = true;
    }

    int ans = 0;
    for(int i=1; i<=N; i++)
        if(v[i]) ans++;

    cout << ans << "\n";
}
