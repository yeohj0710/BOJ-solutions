#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<double, double>> v(N);

    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    double ans = 0;

    for(int i=1; i<N; i++)
        ans = max(ans, abs(v[i].second - v[i-1].second) / (v[i].first - v[i-1].first));

    cout << fixed;
    cout.precision(1);

    cout << ans << "\n";
}
