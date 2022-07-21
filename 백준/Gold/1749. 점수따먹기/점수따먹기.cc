#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N+1, vector<int>(M+1));
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) cin >> v[i][j];

    vector<vector<int>> u(N+1, vector<int>(M+1));
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++)
            u[i][j] = u[i-1][j] + u[i][j-1] - u[i-1][j-1] + v[i][j];

    int ans = INT_MIN;
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++)
            for(int k=i; k<=N; k++)
                for(int l=j; l<=M; l++)
                    ans = max(ans, u[k][l] - u[i-1][l] - u[k][j-1] + u[i-1][j-1]);

    cout << ans << "\n";
}
