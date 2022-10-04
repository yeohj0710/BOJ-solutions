#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int l = 1, r = 1e9, ans = -1;

    while(l <= r) {
        int m = (l + r) / 2;

        int sum = 0;

        for(int i=0; i<N; i++) {
            int x;

            if(v[i] >= M*2) x = v[i] - M*2;
            else if(v[i] >= M) x = v[i] - M;
            else continue;

            sum += x / m;
        }

        if(sum >= K) {
            ans = max(ans, m);
            l = m + 1;
        }
        else r = m - 1;
    }

    cout << ans << "\n";
}
