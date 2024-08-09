#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int n; cin >> n;

        if(n == 0) break;

        vector<int> v(n), u(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];

            if(i > 0) v[i] += v[i-1];
        }
        for(int i=0; i<n; i++) {
            cin >> u[i];

            if(i > 0) u[i] += u[i-1];
        }

        int x = 0, ans = 0;

        for(int i=0; i<n; i++) {
            if(v[i] < u[i]) {
                if(x > 0) ans++;

                x = -1;
            }
            else if(v[i] > u[i]) {
                if(x < 0) ans++;

                x = 1;
            }
        }

        cout << ans << "\n";
    }
}
