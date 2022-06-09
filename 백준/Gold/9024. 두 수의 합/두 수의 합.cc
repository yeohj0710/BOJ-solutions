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

        int i = 0, j = N-1, diff = INT_MAX;
        while(i < j) {
            diff = min(diff, abs(v[i] + v[j] - M));

            if(v[i] + v[j] <= M) i++;
            else j--;
        }

        int ans = 0;
        for(int i=0; i<N-1; i++) {
            ans += upper_bound(v.begin()+i+1, v.end(), M+diff-v[i])
                   - lower_bound(v.begin()+i+1, v.end(), M+diff-v[i]);
            if(diff != 0) ans += upper_bound(v.begin()+i+1, v.end(), M-diff-v[i])
                                - lower_bound(v.begin()+i+1, v.end(), M-diff-v[i]);
        }

        cout << ans << "\n";
    }
}
