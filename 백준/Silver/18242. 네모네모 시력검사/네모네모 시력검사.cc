#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));

    int l = INT_MAX, r = INT_MIN;
    int u = INT_MAX, d = INT_MIN;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> v[i][j];

            if(v[i][j] == '#') {
                l = min(l, j);
                r = max(r, j);
                u = min(u, i);
                d = max(d, i);
            }
        }

    int cnt = 0;

    for(int i=l; i<=r; i++)
        if(v[u][i] == '#') cnt++;

    if(cnt < r-l+1) {
        cout << "UP\n";
        return 0;
    }

    cnt = 0;

    for(int i=l; i<=r; i++)
        if(v[d][i] == '#') cnt++;

    if(cnt < r-l+1) {
        cout << "DOWN\n";
        return 0;
    }

    cnt = 0;

    for(int i=u; i<=d; i++)
        if(v[i][l] == '#') cnt++;

    if(cnt < d-u+1) {
        cout << "LEFT\n";
        return 0;
    }

    cnt = 0;

    for(int i=u; i<=d; i++)
        if(v[i][r] == '#') cnt++;

    if(cnt < d-u+1) {
        cout << "RIGHT\n";
        return 0;
    }
}
