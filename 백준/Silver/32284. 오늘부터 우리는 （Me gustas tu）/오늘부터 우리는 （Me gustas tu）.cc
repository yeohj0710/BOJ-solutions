#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int a, b; cin >> a >> b;

    vector<vector<char>> v(n, vector<char>(m));

    for(int i=0; i<a; i++)
        for(int j=0; j<m; j++) v[i][j] = 'S';

    for(int i=a+1; i<n; i++)
        for(int j=0; j<m; j++) v[i][j] = 'N';

    for(int i=0; i<=b; i++) v[a][i] = 'E';
    for(int i=b+1; i<m; i++) v[a][i] = 'W';

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) cout << v[i][j];
        cout << "\n";
    }
}
