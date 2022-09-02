#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int a, b; cin >> a >> b;

        int N = min(a, b);

        int ans = (N+1) * N / 2;

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
