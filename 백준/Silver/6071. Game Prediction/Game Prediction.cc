#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<int> v(M);
        for(int i=0; i<M; i++) cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());

        int ans = 0, cur = N*M, cnt = 0, i = 0;

        while(cur > 0 && i < M) {
            if(v[i] == cur) {
                cnt++;
                i++;
            }
            else cnt--;

            ans = max(ans, cnt);
            cur--;
        }

        cout << "Case " << t << ": " << ans << "\n";
    }
}
