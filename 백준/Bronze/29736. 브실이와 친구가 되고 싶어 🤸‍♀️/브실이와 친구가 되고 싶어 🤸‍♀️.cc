#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    int ans = 0;

    for(int i=c-d; i<=c+d; i++)
        if(i >= a && i <= b) ans++;

    if(ans > 0) cout << ans << "\n";
    else cout << "IMPOSSIBLE\n";
}
