#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pq;

    int N; cin >> N;

    while(N--) {
        int x; cin >> x;

        if(x == 0) {
            if(pq.empty()) cout << 0 << "\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else pq.push(x);
    }
}
