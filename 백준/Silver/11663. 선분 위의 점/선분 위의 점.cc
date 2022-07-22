#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    while(M--) {
        int a, b; cin >> a >> b;

        int l = 0, r = N-1, x = INT_MAX, y = INT_MIN;

        while(l <= r) {
            int m = (l + r)/2;

            if(v[m] >= a) {
                x = min(x, m);
                r = m - 1;
            }
            else l = m + 1;
        }

        l = 0, r = N-1;

        while(l <= r) {
            int m = (l + r)/2;

            if(v[m] <= b) {
                y = max(y, m);
                l = m + 1;
            }
            else r = m - 1;
        }

        if(x == INT_MAX || y == INT_MIN) cout << 0 << "\n";
        else cout << y - x + 1 << "\n";
    }
}
