#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<M; i++) {
        int x; cin >> x;

        pq.push(x);
    }

    int ans = 0, sum = 0;

    for(int i=0; i<N-M; i++) {
        sum += pq.top();
        ans += sum;

        pq.pop();

        int x; cin >> x;
        pq.push(x);
    }

    while(!pq.empty()) {
        sum += pq.top();
        ans += sum;

        pq.pop();
    }

    cout << ans << "\n";
}
