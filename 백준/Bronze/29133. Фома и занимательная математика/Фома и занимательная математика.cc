#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(4);
    for(int i=0; i<4; i++) cin >> v[i];

    int ans = 0;
    bool chk = true;

    for(int i=1; i<=3; i++) {
        int tot = 0;

        for(int j=0; j<3; j++) {
            int x = 1;

            for(int k=0; k<i; k++) x *= v[j];

            tot += x;
        }

        if(tot == v[3]) {
            if(ans > 0) {
                cout << -1 << "\n";
                return 0;
            }

            ans += i;
        }
    }
    
    if(ans == 0) {
        cout << -1 << "\n";
        return 0;
    }

    cout << ans << "\n";
}
