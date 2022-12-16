#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int ans = 1, cnt = 1;

        for(int i=1; i<N; i++) {
            if(v[i] == v[i-1] + 1) cnt++;
            else {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        ans = max(ans, cnt);

        cout << ans << "\n";
    }
}
