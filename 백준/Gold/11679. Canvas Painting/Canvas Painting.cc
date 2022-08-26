#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        priority_queue<int, vector<int>, greater<int>> pq;

        while(N--) {
            int x; cin >> x;

            pq.push(x);
        }

        int ans = 0;

        while(true) {
            int x = pq.top();
            pq.pop();

            if(pq.empty()) break;

            int y = pq.top();
            pq.pop();

            ans += x + y;
            pq.push(x + y);
        }

        cout << ans << "\n";
    }
}
