#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int cnt[9] = {};

        while(N--) {
            int x, y; cin >> x >> y;

            cnt[y]++;
        }

        int ans = 0;
        for(int i=1; i<9; i++) ans = max(ans, cnt[i]);

        cout << ans << "\n";
    }
}
