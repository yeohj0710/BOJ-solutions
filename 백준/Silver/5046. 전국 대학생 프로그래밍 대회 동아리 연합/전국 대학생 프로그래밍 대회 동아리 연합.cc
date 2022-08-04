#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, B, H, W; cin >> N >> B >> H >> W;

    int ans = INT_MAX;

    while(H--) {
        int p; cin >> p;

        bool check = false;

        for(int i=0; i<W; i++) {
            int x; cin >> x;

            if(x >= N) check = true;
        }

        if(check && p*N <= B) ans = min(ans, p*N);
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << "stay home\n";
}
