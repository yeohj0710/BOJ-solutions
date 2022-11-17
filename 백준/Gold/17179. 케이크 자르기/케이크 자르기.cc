#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T, N, M; cin >> T >> N >> M;

    vector<int> v;

    for(int i=0; i<N; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    v.push_back(M);

    while(T--) {
        int K; cin >> K;

        int l = 1, r = 4e6, ans = 0;

        while(l <= r) {
            int m = (l + r) / 2;

            int cnt = 0, pre = 0;

            for(int i=0; i<v.size(); i++) {
                if(v[i] - pre >= m) {
                    cnt++;
                    pre = v[i];
                }
            }

            cnt--;

            if(cnt >= K) {
                ans = max(ans, m);
                l = m + 1;
            }
            else r = m - 1;
        }

        cout << ans << "\n";
    }
}
