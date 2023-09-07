#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<priority_queue<int>> v(12);

    while(N--) {
        int a, b; cin >> a >> b;

        v[a].push(b);
    }

    while(M--) {
        for(int i=1; i<=11; i++) {
            if(v[i].empty()) continue;

            int x = v[i].top();

            v[i].pop();
            v[i].push(x-1);
        }
    }

    int ans = 0;

    for(int i=1; i<=11; i++) 
        if(!v[i].empty()) ans += v[i].top();

    cout << ans << "\n";
}
