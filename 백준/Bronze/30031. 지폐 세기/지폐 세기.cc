#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        int a, b; cin >> a >> b;

        if(a == 136) ans += 1000;
        else if(a == 142) ans += 5000;
        else if(a == 148) ans += 10000;
        else ans += 50000;
    }

    cout << ans << "\n";
}
