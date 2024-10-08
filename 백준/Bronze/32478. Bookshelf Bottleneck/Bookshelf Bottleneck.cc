#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int ans = 0;
    bool chk = true;

    while(n--) {
        vector<int> v(3);
        for(int i=0; i<3; i++) cin >> v[i];

        sort(v.begin(), v.end());

        if(v[0] > m) {
            chk = false;
            continue;
        }
        else if(v[1] > m) ans += v[1];
        else ans += v[0];
    }

    if(!chk) {
        cout << "impossible\n";
        return 0;
    }

    cout << ans << "\n";
}
