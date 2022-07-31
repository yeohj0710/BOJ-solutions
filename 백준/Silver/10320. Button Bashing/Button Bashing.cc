#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        vector<int> dis(3601, -1);
        dis[0] = 0;

        queue<int> q;
        q.push(0);

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            for(int i=0; i<N; i++) {
                int y = x + v[i];

                if(y < 0) y = 0;
                else if(y > 3600) y = 3600;

                if(dis[y] != -1) continue;

                dis[y] = dis[x] + 1;
                q.push(y);
            }
        }

        int cur = M;
        while(dis[cur] == -1) cur++;

        cout << dis[cur] << " " << cur - M << "\n";
    }
}
