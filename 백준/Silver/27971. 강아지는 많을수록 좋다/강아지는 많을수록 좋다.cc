#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, A, B; cin >> N >> M >> A >> B;

    vector<pair<int, int>> v(M);
    for(int i=0; i<M; i++)
        cin >> v[i].first >> v[i].second;

    vector<int> dis(N+1, -1);
    dis[0] = 0;

    queue<int> q; q.push(0);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x == N) {
            cout << dis[N] << "\n";
            return 0;
        }

        bool check = true;

        for(int i=0; i<M; i++)
            if(v[i].first <= x + A && x + A <= v[i].second) check = false;

        if(x + A <= N && dis[x + A] == -1 && check) {
            dis[x + A] = dis[x] + 1;
            q.push(x + A);
        }

        check = true;

        for(int i=0; i<M; i++)
            if(v[i].first <= x + B && x + B <= v[i].second) check = false;

        if(x + B <= N && dis[x + B] == -1 && check) {
            dis[x + B] = dis[x] + 1;
            q.push(x + B);
        }
    }

    cout << -1 << "\n";
 }
