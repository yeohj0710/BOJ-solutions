#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int dis[51][51] = {};

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            char c; cin >> c;

            if(c == 'Y') dis[i][j] = 1;
            else if(i == j) dis[i][j] = 0;
            else dis[i][j] = INT_MAX;
        }

    for(int k=0; k<N; k++)
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

    int ans = 0;
    for(int i=0; i<N; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++) {
            if(i == j) continue;

            if(dis[i][j] <= 2) cnt++;
        }
        ans = max(ans, cnt);
    }

    cout << ans << "\n";
}
