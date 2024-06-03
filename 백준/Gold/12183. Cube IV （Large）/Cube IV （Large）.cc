#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n; cin >> n;

        struct s { int a, b; };
        vector<s> v(n*n + 1);

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) {
                int x; cin >> x;

                v[x] = { i, j };
            }

        vector<int> u(n*n + 1); u[n*n] = 1;
        int cur = 1;

        for(int i=n*n-1; i>=1; i--) {
            if(abs(v[i].a - v[i+1].a) + abs(v[i].b - v[i+1].b) == 1) cur++;
            else cur = 1;

            u[i] = cur;
        }

        int mx = 0, idx = 0;

        for(int i=1; i<=n*n; i++)
            if(u[i] > mx) {
                mx = u[i];
                idx = i;
            }

        cout << idx << " " << mx << "\n";
    }
}
