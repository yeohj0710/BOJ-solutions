#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, w, l, h, a, M;

        cin >> N >> w >> l >> h >> a >> M;

        if(N == 0 && w == 0 && l == 0 && h == 0 && a == 0 && M == 0) break;

        int sum = w*h*2 + l*h*2 + w*l;

        while(M--) {
            int x, y; cin >> x >> y;

            sum -= x * y;
        }

        sum *= N;

        int ans = (sum - 1)/a + 1;

        cout << ans << "\n";
    }
}
