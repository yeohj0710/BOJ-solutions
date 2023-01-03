#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<vector<int>> v(N+1, vector<int>(N+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) cin >> v[i][j];

    int ans = 0;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
            for(int k=1; k<=N; k++)
                if(v[i][j] + v[j][k] < v[i][k]) ans = 4;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
            if(v[i][j] != v[j][i]) ans = 3;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
            if(i != j && v[i][j] <= 0) ans = 2;

    for(int i=1; i<=N; i++)
        if(v[i][i] != 0) ans = 1;

    cout << ans << "\n";
}
