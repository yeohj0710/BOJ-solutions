#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { int x1, y1, x2, y2, cost; };

bool cmp(P &a, P &b) {
    return a.cost < b.cost;
}

int ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
    int val = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if(val == 0) return 0;
    else if(val > 0) return 1;
    else if(val < 0) return -1;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<P> v(N);
    for(int i=0; i<N; i++)
        cin >> v[i].x1 >> v[i].y1 >> v[i].x2 >> v[i].y2 >> v[i].cost;

    sort(v.begin(), v.end(), cmp);

    vector<vector<int>> u(N+1);
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            int a = ccw(v[i].x1, v[i].y1, v[i].x2, v[i].y2, v[j].x1, v[j].y1)
                    * ccw(v[i].x1, v[i].y1, v[i].x2, v[i].y2, v[j].x2, v[j].y2);
            int b = ccw(v[j].x1, v[j].y1, v[j].x2, v[j].y2, v[i].x1, v[i].y1)
                    * ccw(v[j].x1, v[j].y1, v[j].x2, v[j].y2, v[i].x2, v[i].y2);

            if((a < 0) && (b < 0)) {
                u[i].push_back(j);
                u[j].push_back(i);
            }
        }

    int ans = 0;
    for(int i=0; i<N; i++) {
        int cnt = 0;
        for(int j=0; j<u[i].size(); j++)
            if(u[i][j] > i) cnt++;

        ans += (cnt + 1) * v[i].cost;
    }

    cout << ans << "\n";
}
