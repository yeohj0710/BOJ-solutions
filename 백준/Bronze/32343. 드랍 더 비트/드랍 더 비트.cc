#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, a, b; cin >> n >> a >> b;

    int ans = 0;

    for(int i=n-1; i>=max(n-(a+b), a+b-n); i--) ans += (1 << i);

    cout << ans << "\n";
}
