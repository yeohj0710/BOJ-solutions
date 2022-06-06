#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    priority_queue<int, vector<int>> pq;

    while(N--) {
        int M; cin >> M;

        if(M == 0) {
            if(pq.empty()) cout << -1 << "\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else {
            while(M--) {
                int x; cin >> x;
                pq.push(x);
            }
        }
    }
}
