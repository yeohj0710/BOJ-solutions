#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    int sour, dest; cin >> sour >> dest;

    vector<int> dis(N+1, -1);
    dis[sour] = 0;

    queue<int> q;
    q.push(sour);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x == dest) {
            cout << dis[x] << "\n";
            return 0;
        }

        for(int i=1; i<=N; i++) {
            if(abs(x - i) % v[x] != 0) continue;
            if(dis[i] != -1) continue;

            dis[i] = dis[x] + 1;
            q.push(i);
        }
    }

    cout << -1 << "\n";
}
