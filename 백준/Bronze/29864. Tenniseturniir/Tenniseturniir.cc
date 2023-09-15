#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<vector<int>> v(4);

    for(int i=0; i<8; i++) {
        int x; cin >> x;

        v[0].push_back(x);
    }

    unordered_map<int, int> m;

    for(int i=0; i<7; i++) {
        int x; cin >>x;

        m[x]++;
    }

    for(int i=1; i<4; i++)
        for(int j=0; j<v[i-1].size(); j++)
            if(m[v[i-1][j]] > 0) {
                v[i].push_back(v[i-1][j]);
                m[v[i-1][j]]--;
            }

    for(int i=3; i>0; i--) {
        for(int j=0; j<v[i].size(); j++) cout << v[i][j] << " ";
        cout << "\n";
    }
}
