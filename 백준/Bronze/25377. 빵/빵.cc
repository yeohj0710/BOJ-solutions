#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = INT_MAX;

    while(N--) {
        int a, b; cin >> a >> b;

        if(a > b) continue;

        ans = min(ans, b);
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << -1 << "\n";
}
