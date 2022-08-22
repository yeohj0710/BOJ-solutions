#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        unordered_map<int, int> m;
        int ans = 0;

        while(N--) {
            int x; cin >> x;

            ans += m[x];

            m[x ^ M]++;
        }

        cout << ans << "\n";
    }
}
