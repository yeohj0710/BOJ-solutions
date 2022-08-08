#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> dis(1e6 + 1, -1);
    dis[N] = 0;

    queue<int> q;
    q.push(N);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x == M) {
            cout << dis[M] << "\n";
            break;
        }

        if(x+1 <= 1e6 && dis[x+1] == -1) {
            dis[x+1] = dis[x] + 1;
            q.push(x+1);
        }
        if(x*2 <= 1e6 && dis[x*2] == -1) {
            dis[x*2] = dis[x] + 1;
            q.push(x*2);
        }
    }
}
