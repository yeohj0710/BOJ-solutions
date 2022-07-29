#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, S, G, U, D; cin >> N >> S >> G >> U >> D;

    vector<int> dis(N+1, -1);
    dis[S] = 0;

    queue<int> q;
    q.push(S);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x == G) {
            cout << dis[G] << "\n";
            return 0;
        }

        if(x+U <= N && dis[x+U] == -1) {
            dis[x+U] = dis[x] + 1;
            q.push(x+U);
        }
        if(x-D >= 1 && dis[x-D] == -1) {
            dis[x-D] = dis[x] + 1;
            q.push(x-D);
        }
    }

    cout << "use the stairs\n";
}
