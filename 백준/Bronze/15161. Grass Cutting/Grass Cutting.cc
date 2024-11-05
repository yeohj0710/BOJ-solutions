#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<vector<int>> v(11, vector<int>(11, 1));

    while(n--) {
        for(int i=1; i<=10; i++)
            for(int j=1; j<=10; j++) v[i][j]++;

        for(int i=0; i<6; i++) {
            int x; cin >> x;

            for(int j=1; j<=10; j++) {
                if(i < 3) v[x][j] = 1;
                else v[j][x] = 1;
            }
        }
    }

    for(int i=1; i<=10; i++) {
        for(int j=1; j<=10; j++) cout << v[i][j] << " ";
        cout << "\n";
    }
}
