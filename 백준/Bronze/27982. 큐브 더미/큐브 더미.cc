#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<vector<bool>>> v(10, vector<vector<bool>>(10, vector<bool>(10)));

    for(int i=0; i<M; i++) {
        int a, b, c; cin >> a >> b >> c;

        v[a][b][c] = true;
    }
    
    int ans = 0;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
            for(int k=1; k<=N; k++) {
                if(!v[i][j][k]) continue;
                if(!v[i+1][j][k]) continue;
                if(!v[i-1][j][k]) continue;
                if(!v[i][j+1][k]) continue;
                if(!v[i][j-1][k]) continue;
                if(!v[i][j][k+1]) continue;
                if(!v[i][j][k-1]) continue;
                
                ans++;
            }
    
    cout << ans << "\n";
}
