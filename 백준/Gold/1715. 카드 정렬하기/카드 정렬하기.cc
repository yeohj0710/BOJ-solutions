#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        pq.push(x);
    }

    int ans = 0;
    while(!pq.empty()) {
        int a = pq.top();
        pq.pop();

        if(pq.empty()) break;

        int b = pq.top();
        pq.pop();

        pq.push(a + b);
        ans += a + b;
    }

    cout << ans << "\n";
}
