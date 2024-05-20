#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<vector<int>> v(m+1, vector<int>(26));
    int mod = 1e9 + 7;

    for(int i=0; i<26; i++) v[1][i] = 1;

    for(int i=2; i<=m; i++) {
        for(int j=0; j<26; j++) {
            for(int k=0; k<=j-n; k++)
                v[i][k] = (v[i][k] + v[i-1][j]) % mod;

            for(int k=j+n; k<26; k++) {
                if(k == j) continue;

                v[i][k] = (v[i][k] + v[i-1][j]) % mod;
            }
        }
    }

    int ans = 0;

    for(int i=0; i<26; i++) ans += v[m][i];

    ans %= mod;

    cout << ans << "\n";
}
