#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<int> u(N), v(N);
        for(int i=0; i<N; i++) cin >> u[i];
        for(int i=0; i<N; i++) cin >> v[i];

        sort(u.begin(), u.end());
        sort(v.begin(), v.end(), greater<int>());

        int ans = 0;
        for(int i=0; i<N; i++) ans += u[i] * v[i];

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
