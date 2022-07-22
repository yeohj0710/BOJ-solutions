#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[i] = v[i-1] + x;
    }

    while(M--) {
        int x; cin >> x;

        x++;

        int l = 1, r = N, ans = N;

        while(l <= r) {
            int m = (l + r)/2;

            if(v[m] >= x) {
                ans = min(ans, m);
                r = m - 1;
            }
            else l = m + 1;
        }

        cout << ans << "\n";
    }
}
