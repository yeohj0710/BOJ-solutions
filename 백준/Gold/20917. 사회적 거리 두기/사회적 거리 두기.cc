#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        vector<int> u(N-1);
        for(int i=0; i<N-1; i++) u[i] = v[i+1] - v[i];

        int l = 1, r = INT_MAX, ans = 1;

        while(l <= r) {
            int m = (l + r)/2;

            int cnt = 1, sum = 0;
            for(int i=0; i<N-1; i++) {
                if(sum + u[i] >= m) {
                    sum = 0;
                    cnt++;
                }
                else sum += u[i];
            }

            if(cnt >= M) {
                ans = max(ans, m);
                l = m + 1;
            }
            else r = m - 1;
        }

        cout << ans << "\n";
    }
}
