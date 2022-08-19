#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    int x = INT_MIN, ans = 0;

    for(int i=0; i<N; i++) {
        if(x >= v[i].second) continue;

        x = max(x, v[i].first);

        int cnt = ((v[i].second - x) - 1) / M + 1;

        ans += cnt;
        x += M * cnt;
    }

    cout << ans << "\n";
}
