#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, N; cin >> a >> b >> N;

    int ans = abs(a - b);
    while(N--) {
        int x; cin >> x;
        ans = min(ans, 1 + abs(x - b));
    }

    cout << ans << "\n";
}
