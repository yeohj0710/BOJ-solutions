#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    int ans = INT_MAX;

    while(N--) {
        int x, y; cin >> x >> y;

        int temp = M;

        for(int i=1; ; i++) {
            if(i % (x + y) > 0 && i % (x + y) <= x) temp -= K;

            if(temp <= 0) {
                ans = min(ans, i);
                break;
            }
        }
    }

    cout << ans << "\n";
}
