#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> vis(100001, -1);
    vis[N] = 0;

    queue<int> q;
    q.push(N);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x == M) {
            cout << vis[x] << "\n";
            break;
        }

        if(x-1 >= 0 && vis[x-1] == -1) {
            vis[x-1] = vis[x] + 1;
            q.push(x-1);
        }
        if(x+1 <= 100000 && vis[x+1] == -1) {
            vis[x+1] = vis[x] + 1;
            q.push(x+1);
        }
        if(x*2 <= 100000 && vis[x*2] == -1) {
            vis[x*2] = vis[x] + 1;
            q.push(x*2);
        }
    }
}
