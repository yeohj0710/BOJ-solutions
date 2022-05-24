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
    for(int i=0; i<N-1; i++)
        ans += abs(v[i].first - v[i+1].first) + abs(v[i].second - v[i+1].second);

    cout << ans << "\n";
}
