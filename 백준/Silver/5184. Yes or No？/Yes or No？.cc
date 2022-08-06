#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int l, r, N; cin >> l >> r >> N;

        vector<double> v(N+1);
        for(int i=1; i<=N; i++) cin >> v[i];

        sort(v.begin()+1, v.end(), greater<double>());

        int cur = 1;
        double ans = 0;

        while(cur <= N && cur <= l) {
            ans += v[cur];
            cur++;
        }

        while(cur <= N && cur <= r && v[cur] >= 0.5) {
            ans += v[cur];
            cur++;
        }

        while(cur <= N) {
            ans += (1 - v[cur]);
            cur++;
        }

        cout <<"Data Set " << t << ":\n";
        cout << ans << "\n";
    }
}
