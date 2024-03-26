#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<priority_queue<int, vector<int>, greater<int>>> pq(N);
    vector<string> u(N);

    for(int i=0; i<N; i++) {
        cin >> u[i];

        for(int j=0; j<M; j++) {
            int x; cin >> x;

            pq[i].push(x);
        }
    }

    vector<string> ans;

    while(ans.size() < N) {
        int idx = 0;

        while(pq[idx].size() == 0) idx++;

        for(int i=0; i<N; i++) {
            if(pq[i].size() == 0) continue;
            if(pq[i].top() < pq[idx].top() || (pq[i].top() == pq[idx].top() && u[i] < u[idx])) idx = i;
        }

        pq[idx].pop();

        if(pq[idx].size() == 0) ans.push_back(u[idx]);

        for(int i=0; i<N; i++) {
            if(i == idx || pq[i].size() == 0) continue;

            int x = pq[i].top();

            pq[i].pop();
            pq[i].push(x + K);
        }
    }

    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
