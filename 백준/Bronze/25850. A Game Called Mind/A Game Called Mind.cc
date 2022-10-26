#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<priority_queue<int, vector<int>, greater<int>>> v(N);

    for(int i=0; i<N; i++) {
        int M; cin >> M;

        while(M--) {
            int x; cin >> x;

            v[i].push(x);
        }
    }

    while(true) {
        int Min = INT_MAX, idx = -1;

        for(int i=0; i<N; i++) {
            if(v[i].empty()) continue;

            if(v[i].top() < Min) {
                Min = v[i].top();
                idx = i;
            }
        }

        if(idx == -1) break;

        cout << char('A' + idx);

        v[idx].pop();
    }

    cout << "\n";
}
