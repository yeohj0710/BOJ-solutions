#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) cin >> v[i];

        int ans = 0;

        for(int i=1; i<=N-1; i++) {
            int idx;

            for(int j=i; j<=N; j++)
                if(v[j] == i) idx = j;

            reverse(v.begin()+i, v.begin()+idx+1);
            ans += idx - i + 1;
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
