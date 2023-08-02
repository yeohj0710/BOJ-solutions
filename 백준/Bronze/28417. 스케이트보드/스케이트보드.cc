#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        vector<int> v(2), u(5);

        for(int i=0; i<2; i++) cin >> v[i];
        for(int i=0; i<5; i++) cin >> u[i];

        sort(v.begin(), v.end(), greater<int>());
        sort(u.begin(), u.end(), greater<int>());

        ans = max(ans, v[0] + u[0] + u[1]);
    }

    cout << ans << "\n";
}
