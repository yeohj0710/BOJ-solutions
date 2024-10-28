#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int ans = 0;

    int a, b; cin >> a >> b;

    if(a == 1) ans += n;

    if(b == 1) {
        if(a == 1) {
            int x; cin >> x;

            if(x == 1) ans++;
        }
        else {
            for(int i=0; i<n; i++) {
                int x; cin >> x;

                if(x == 1) ans++;
            }
        }
    }

    cout << ans << "\n";
}
