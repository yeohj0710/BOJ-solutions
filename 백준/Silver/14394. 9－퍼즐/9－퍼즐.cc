#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v(2);

    cin >> v[0] >> v[1];

    vector<vector<int>> u(2, vector<int>(4));

    for(int i=0; i<2; i++) {
        for(int j=0; j<v[i].length(); j++) {
            if(v[i][j] == 'R') u[i][0]++;
            else if(v[i][j] == 'G') u[i][1]++;
            else if(v[i][j] == 'B') u[i][2]++;
            else if(v[i][j] == 'Y') u[i][3]++;
        }
    }

    int ans = 0;

    for(int i=0; i<4; i++) ans += abs(u[0][i] - u[1][i]);

    ans /= 2;

    cout << ans << "\n";
}
