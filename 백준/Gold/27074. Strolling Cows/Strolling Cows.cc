#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    vector<int> u(N+1), w(N+1);
    int gidx = 1, ans = 0;

    for(int i=1; i<=N; i++) {
        if(u[i] > 0) continue;

        int x = i, nidx = 1;

        while(u[x] == 0) {
            u[x] = nidx++;
            w[x] = gidx;
            x = v[x];
        }

        if(w[x] == gidx)
            ans = max(ans, nidx - u[x]);

        gidx++;
    }

    cout << ans << "\n";
}
