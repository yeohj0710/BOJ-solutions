#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    while(M--) {
        int x; cin >> x;

        int l = 0, r = 2e9;

        while(l <= r) {
            int m = (l + r) / 2;

            int val = m - (upper_bound(v.begin(), v.end(), m) - v.begin()) + 1;

            if(val < x) l = m + 1;
            else r = m - 1;
        }

        cout << l << " ";
    }
    cout << "\n";
}
