#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<pair<int, string>> v(N+2);

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int cur = 1, x = 0, y = 0;

    v[0] = {0, "right"};
    v[N+1] = {M, "right"};

    for(int i=1; i<=N; i++)
        cin >> v[i].first >> v[i].second;

    for(int i=1; i<v.size(); i++) {
        int time = v[i].first - v[i-1].first;

        x += time * dx[cur % 4];
        y += time * dy[cur % 4];

        if(v[i].second == "left") {
            cur--;

            if(cur == -1) cur = 3;
        }
        else cur++;
    }

    cout << x << " " << y << "\n";
}
