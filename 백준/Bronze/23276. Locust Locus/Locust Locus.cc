#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = INT_MAX;
    while(N--) {
        int a, b, c; cin >> a >> b >> c;

        ans = min(ans, a + b*c/__gcd(b, c));
    }

    cout << ans << "\n";
}
