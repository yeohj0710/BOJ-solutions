#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    priority_queue<int, vector<int>> pq;

    while(N--) {
        int x; cin >> x;

        pq.push(x);
    }

    bool b = true;

    while(M--) {
        int x; cin >> x;

        if(x > pq.top()) {
            b = false;
            break;
        }

        int tmp = pq.top() - x;

        pq.pop();

        if(tmp > 0) pq.push(tmp);
    }

    if(b) cout << 1 << "\n";
    else cout << 0 << "\n";
}
