#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    int N, a, b; cin >> N >> a >> b;

    vector<pair<int, int>> v(N), u(N);
    for(int i=0; i<N; i++) {
        cin >> v[i].first >> u[i].first;

        v[i].second = u[i].second = i;
    }

    if(N == 1) {
        double ans = max((double)a/v[0].first, (double)b/u[0].first);

        cout << ans << "\n";

        return 0;
    }

    sort(v.begin(),v.end());
    sort(u.begin(),u.end());

    if(v[0].second == u[0].second) {
        double ans = max((double)a/v[0].first + (double)b/u[1].first,
                           (double)a/v[1].first + (double)b/u[0].first);

        cout << ans << "\n";

        return 0;
    }

    double ans = (double)a/v[0].first + (double)b/u[0].first;

    cout << ans << "\n";
}
