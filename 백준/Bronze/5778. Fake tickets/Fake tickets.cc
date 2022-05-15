#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<bool> u(N+1), v(N+1);

        for(int i=0; i<M; i++) {
            int x; cin >> x;

            if(u[x]) v[x] = true;

            u[x] = true;
        }

        int ans = 0;
        for(int i=1; i<=N; i++)
            if(v[i]) ans++;

        cout << ans << "\n";
    }
}
