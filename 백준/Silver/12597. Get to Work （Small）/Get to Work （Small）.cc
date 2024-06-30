#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n, m; cin >> n >> m;

        int k; cin >> k;

        vector<vector<int>> v(n+1);

        while(k--) {
            int a, b; cin >> a >> b;

            v[a].push_back(b);
        }

        bool chk = true;
        vector<int> u(n+1);

        for(int i=1; i<=n; i++) {
            if(i == m) continue;
            if(v[i].size() == 0) continue;

            sort(v[i].begin(), v[i].end(), greater<int>());

            int sum = 0, cnt = -1;

            for(int j=0; j<v[i].size(); j++) {
                sum += v[i][j];

                if(sum >= v[i].size()) {
                    cnt = j+1;
                    break;
                }
            }

            if(cnt == -1) {
                chk = false;
                break;
            }

            u[i] = cnt;
        }

        if(!chk) {
            cout << "IMPOSSIBLE\n";
            continue;
        }

        for(int i=1; i<=n; i++) cout << u[i] << " ";
        cout << "\n";
    }
}
