#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    int l = 1, r = INT_MAX, ans = INT_MAX;

    while(l <= r) {
        int m = (l + r)/2;

        int sum = 0;
        for(int i=0; i<M; i++) sum += (v[i] - 1)/m + 1;

        if(sum <= N) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
