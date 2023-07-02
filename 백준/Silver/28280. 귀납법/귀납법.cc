#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> dis(4e6 + 1, -1);
        dis[1] = 0;

        queue<int> q;
        q.push(1);

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            if(x == N) break;

            if(x*2 <= 4e6 && dis[x*2] == -1) {
                dis[x*2] = dis[x] + 1;
                q.push(x*2);
            }
            if(x-1 >= 1 && dis[x-1] == -1) {
                dis[x-1] = dis[x] + 1;
                q.push(x-1);
            }
        }

        cout << dis[N] << "\n";
    }
}
