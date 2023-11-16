#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<vector<bool>> v(N, vector<bool>(86400));

    for(int i=0; i<N; i++) {
        int M; cin >> M;

        while(M--) {
            int a, b; cin >> a >> b;

            for(int j=a; j<=b; j++) v[i][j] = true;
        }
    }

    int mx = 0;
    vector<int> u(N+1);

    for(int i=0; i<86400; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++)
            if(v[j][i]) cnt++;

        mx = max(mx, cnt);

        u[cnt]++;
    }

    cout << mx << "\n";
    cout << u[mx] << "\n";
}
