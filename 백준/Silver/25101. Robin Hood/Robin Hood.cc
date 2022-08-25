#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
    vector<int> v(N);

    for(int i=0; i<N; i++) {
        cin >> v[i];

        pq.push({v[i], -i});
    }

    bool b = true;

    while(M--) {
        if(pq.top().first <= 100) {
            b = false;
            break;
        }

        int x = pq.top().first;
        int y = -pq.top().second;

        pq.pop();

        v[y] -= 100;

        pq.push({x - 100, -y});
    }

    if(b) {
        for(int i=0; i<N; i++) cout << v[i] << " ";
        cout << "\n";
    }
    else cout << "impossible\n";
}
