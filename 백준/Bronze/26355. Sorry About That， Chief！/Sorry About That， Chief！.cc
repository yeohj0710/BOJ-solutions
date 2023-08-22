#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int Max = 1e5 + 1;

    vector<bool> isp(Max, true);
    isp[0] = isp[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) isp[i*j] = false;

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        cout << "Input value: " << x << "\n";

        int ans = 0, i = x, j = x;

        while(!isp[i] && !isp[j]) i--, j++, ans++;

        if(ans == 0) cout << "Would you believe it; it is a prime!\n";
        else cout << "Missed it by that much (" << ans << ")!\n";

        cout << "\n";
    }
}
