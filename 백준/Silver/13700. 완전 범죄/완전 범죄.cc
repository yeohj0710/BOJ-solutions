#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, S, D, F, B, K; cin >> N >> S >> D >> F >> B >> K;

    vector<int> v(N+1);

    while(K--) {
        int x; cin >> x;

        v[x] = 1;
    }

    vector<int> dis(N+1, -1);
    dis[S] = 0;

    queue<int> q;
    q.push(S);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x == D) {
            cout << dis[D] << "\n";
            return 0;
        }

        if(x+F <= N && v[x+F] != 1 && dis[x+F] == -1) {
            dis[x+F] = dis[x] + 1;
            q.push(x+F);
        }
        if(x-B >= 1 && v[x-B] != 1 && dis[x-B] == -1) {
            dis[x-B] = dis[x] + 1;
            q.push(x-B);
        }
    }

    cout << "BUG FOUND\n";
}
