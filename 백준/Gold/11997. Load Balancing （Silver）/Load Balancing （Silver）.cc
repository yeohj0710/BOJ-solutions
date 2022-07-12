#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> vx(N+1), vy(N+1);

    for(int i=1; i<=N; i++) {
        cin >> vx[i].first >> vy[i].first;

        vx[i].second = vy[i].second = i;
    }

    sort(vx.begin()+1, vx.end());
    sort(vy.begin()+1, vy.end());

    struct p { int x, y; };
    vector<p> v(N+1);
    int xcnt = 1, ycnt = 1;

    for(int i=1; i<=N; i++) {
        if(i > 1 && vx[i].first > vx[i-1].first) xcnt++;

        v[vx[i].second].x = xcnt;
    }
    for(int i=1; i<=N; i++) {
        if(i > 1 && vy[i].first > vy[i-1].first) ycnt++;

        v[vy[i].second].y = ycnt;
    }

    vector<vector<int>> u(xcnt+1, vector<int>(ycnt+1));
    for(int i=1; i<=N; i++) u[v[i].x][v[i].y]++;

    vector<vector<int>> w(xcnt+1, vector<int>(ycnt+1));
    for(int i=1; i<=xcnt; i++)
        for(int j=1; j<=ycnt; j++)
            w[i][j] = w[i-1][j] + w[i][j-1] - w[i-1][j-1] + u[i][j];

    int ans = INT_MAX;
    for(int i=1; i<=xcnt; i++)
        for(int j=1; j<=ycnt; j++) {
            int x = max({w[i][j],
                          w[i][ycnt] - w[i][j],
                          w[xcnt][j] - w[i][j],
                          w[xcnt][ycnt] - w[i][ycnt] - w[xcnt][j] + w[i][j]});

            ans = min(ans, x);
        }

    cout << ans << "\n";
}
