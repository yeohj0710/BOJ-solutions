#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    int ans = INT_MIN;

    for(int i=0; i<pow(2, N); i++) {
        int tmp = i, cnt = 0;
        vector<bool> u(N);

        for(int j=0; j<N; j++) {
            if(tmp % 2 == 1) cnt++, u[j] = true;
            tmp /= 2;
        }

        if(cnt != M) continue;

        int sum = 0;

        for(int j=0; j<N; j++)
            for(int k=j+1; k<N; k++)
                if(u[j] && u[k]) sum += v[j][k];

        ans = max(ans, sum);
    }

    cout << ans << "\n";
}
