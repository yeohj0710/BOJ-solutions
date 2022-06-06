#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    int ans = 0, l = INT_MIN, r = INT_MIN;
    for(int i=0; i<N; i++) {
        if(v[i].first > r) {
            ans += r - l;

            l = v[i].first;
            r = v[i].second;
        }
        else r = max(r, v[i].second);
    }
    ans += r - l;

    cout << ans << "\n";
}
