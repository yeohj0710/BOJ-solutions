#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int n, c, k; cin >> n >> c >> k;

        if(n == 0 && c == 0 && k == 0) break;

        vector<int> v(k+1);

        while(n--) {
            for(int i=0; i<c; i++) {
                int x; cin >> x;

                v[x]++;
            }
        }

        int mn = LLONG_MAX;

        for(int i=1; i<=k; i++) mn = min(mn, v[i]);

        for(int i=1; i<=k; i++)
            if(v[i] == mn) cout << i << " ";

        cout << "\n";
    }
}
