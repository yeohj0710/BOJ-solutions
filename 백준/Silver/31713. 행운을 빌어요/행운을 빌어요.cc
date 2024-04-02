#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        int ans = INT_MAX;

        for(int i=a; i<=1000; i++) {
            int x;

            if(i * 3 <= b && i * 4 >= b) x = 0;
            else if(i * 3 > b) x = i * 3 - b;
            else continue;

            ans = min(ans, i - a + x);
        }

        cout << ans << "\n";
    }
}
