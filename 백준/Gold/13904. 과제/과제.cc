#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<N; i++) {
        pq.push(v[i].second);

        while(v[i].first < pq.size()) pq.pop();
    }

    int ans = 0;

    while(!pq.empty()) {
        ans += pq.top();
        pq.pop();
    }

    cout << ans << "\n";
}
