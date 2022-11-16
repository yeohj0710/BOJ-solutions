#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<int>> v(N+1, vector<int>(M+1));
    vector<vector<int>> u(v);

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            v[i][j] = v[i-1][j] + v[i][j-1] - v[i-1][j-1];
            u[i][j] = u[i-1][j] + u[i][j-1] - u[i-1][j-1];

            char ch; cin >> ch;

            if(ch == 'B') {
                if((i + j) % 2 == 0) v[i][j]++;
                else u[i][j]++;
            }
            else {
                if((i + j) % 2 == 0) u[i][j]++;
                else v[i][j]++;
            }
        }

    int ans = INT_MAX;

    for(int i=0; i<=N-K; i++)
        for(int j=0; j<=M-K; j++) {
            int a = v[i+K][j+K] - v[i+K][j] - v[i][j+K] + v[i][j];
            int b = u[i+K][j+K] - u[i+K][j] - u[i][j+K] + u[i][j];

            ans = min({ans, a, b});
        }

    cout << ans << "\n";
}
