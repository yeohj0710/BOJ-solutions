#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<pair<int, int>> v(N);
        for(int i=0; i<N; i++)
            cin >> v[i].first >> v[i].second;

        vector<bool> u(N);

        int M; cin >> M;

        while(M--) {
            int x, y; cin >> x >> y;

            for(int i=0; i<N; i++) {
                if(v[i].first <= x + 50 && v[i].first >= x - 50
                   && v[i].second <= y + 50 && v[i].second >= y - 50) u[i] = true;
            }
        }

        int ans = 0;

        for(int i=0; i<N; i++)
            if(u[i]) ans++;

        cout << ans << "\n";
    }
}
