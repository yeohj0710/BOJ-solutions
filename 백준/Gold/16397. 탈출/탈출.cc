#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    queue<int> q;
    q.push(N);

    vector<int> vis(100000, -1);
    vis[N] = 0;

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x == K) {
            if(vis[K] <= M) cout << vis[K] << "\n";
            else cout << "ANG\n";

            return 0;
        }

        if(x+1 < 100000 && vis[x+1] == -1) {
            vis[x+1] = vis[x] + 1;
            q.push(x+1);
        }

        if(x*2 >= 100000) continue;

        string str = to_string(x*2);
        int y = x*2 - pow(10, str.length()-1);

        if(y < 100000 && vis[y] == -1) {
            vis[y] = vis[x] + 1;
            q.push(y);
        }
    }

    cout << "ANG\n";
}
