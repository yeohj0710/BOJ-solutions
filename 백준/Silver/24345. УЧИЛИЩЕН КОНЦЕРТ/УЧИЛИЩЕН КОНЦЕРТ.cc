#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    int l = 1, r = 1e10, ans = 1e10;

    while(l <= r) {
        int m = (l + r)/2;

        int sum = 0;
        for(int i=0; i<M; i++) sum += m / v[i];

        if(sum >= N) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
