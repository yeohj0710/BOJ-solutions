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
        vector<s> v(n);

        for(int i=0; i<n; i++) cin >> v[i].a >> v[i].b;

        int m; cin >> m;

        while(m--) {
            int x; cin >> x;

            int cnt = 0;

            for(int i=0; i<n; i++)
                if(x >= v[i].a && x <= v[i].b) cnt++;

            cout << cnt << " ";
        }
        cout << "\n";
    }
}
