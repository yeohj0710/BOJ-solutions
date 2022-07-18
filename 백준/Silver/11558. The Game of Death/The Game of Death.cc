#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) cin >> v[i];

        int ans = 1, cur = 1;
        while(true) {
            if(v[cur] == N) {
                cout << ans << "\n";
                break;
            }

            cur = v[cur];
            ans++;

            if(ans > N) {
                cout << 0 << "\n";
                break;
            }
        }
    }
}
