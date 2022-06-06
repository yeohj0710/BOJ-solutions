#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    priority_queue<int, vector<int>, greater<int>> pq;

    while(N--) {
        int x; cin >> x;
        pq.push(x);
    }

    while(M--) {
        int x = pq.top(); pq.pop();
        int y = pq.top(); pq.pop();

        pq.push(x + y);
        pq.push(x + y);
    }

    int ans = 0;
    while(!pq.empty()) {
        ans += pq.top();
        pq.pop();
    }

    cout << ans << "\n";
}
