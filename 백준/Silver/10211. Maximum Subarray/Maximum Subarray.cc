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
        for(int i=1; i<=N; i++) {
            int x; cin >> x;

            v[i] = v[i-1] + x;
        }

        int ans = INT_MIN;
        for(int i=1; i<=N; i++)
            for(int j=i; j<=N; j++) ans = max(ans, v[j] - v[i-1]);

        cout << ans << "\n";
    }
}
