#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    int ans = 0;
    for(int i=1; i<N; i++) ans = max(ans, (v[i].second - v[i-1].second) / (v[i].first - v[i-1].first));

    cout << ans << "\n";
}
