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

    priority_queue<int, vector<int>, greater<int>> pq;
    int ans = 0;

    for(int i=0; i<N; i++) {
        while(!pq.empty() && pq.top() <= v[i].first) pq.pop();

        pq.push(v[i].second);

        ans = max(ans, (int)pq.size());
    }

    cout << ans << "\n";
}
