#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);

    int mx = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        mx = max(mx, x);

        v[i] = mx;
    }

    while(M--) {
        int x; cin >> x;

        int l = 0, r = N-1, ans = 0;

        while(l <= r) {
            int m = (l + r) / 2;

            if(x > v[m]) {
                ans = max(ans, m+1);
                l = m + 1;
            }
            else r = m - 1;
        }

        cout << ans << " ";
    }
    cout << "\n";
}
