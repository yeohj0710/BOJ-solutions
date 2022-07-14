#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int K, V; cin >> K >> V;

        int ans = (V+1)*(V+1)*(V+1)*(K-V+1) - V*V*V*(K-V);

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
