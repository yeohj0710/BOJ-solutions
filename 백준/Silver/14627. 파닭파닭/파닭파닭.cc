#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int l = 1, r = INT_MAX, unit = 0;

    while(l <= r) {
        int m = (l + r)/2;

        int cnt = 0;
        for(int i=0; i<N; i++) cnt += v[i] / m;

        if(cnt >= M) {
            unit = max(unit, m);
            l = m + 1;
        }
        else r = m - 1;
    }

    int ans = 0, cnt = 0;
    for(int i=0; i<N; i++) {
        ans += v[i] % unit;
        cnt += v[i] / unit;
    }

    ans += (cnt - M) * unit;

    cout << ans << "\n";
}
