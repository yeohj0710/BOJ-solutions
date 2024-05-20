#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; cin >> n >> m >> k;

    priority_queue<int, vector<int>> pq;

    while(n--) {
        int x; cin >> x;

        pq.push(x);
    }

    int pre = 0;

    vector<int> v;

    while(!pq.empty()) {
        int x = pre / 2 + pq.top();

        v.push_back(x);

        int y = pq.top() - m;

        pq.pop();
        pre = x;

        if(y <= k) continue;

        pq.push(y);
    }

    cout << v.size() << "\n";

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}
