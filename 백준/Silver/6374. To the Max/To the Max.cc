#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(N+1, vector<int>(N+1));
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) cin >> v[i][j];

    vector<vector<int>> u(N+1, vector<int>(N+1));
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
            u[i][j] = u[i-1][j] + u[i][j-1] + v[i][j] - u[i-1][j-1];

    int ans = INT_MIN;

    for(int i=1; i<=N; i++)
        for(int j=i; j<=N; j++)
            for(int k=1; k<=N; k++)
                for(int l=k; l<=N; l++)
                    ans = max(ans, u[j][l] - u[i-1][l] - u[j][k-1] + u[i-1][k-1]);

    cout << ans << "\n";
}
