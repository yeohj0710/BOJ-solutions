#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int N = str.length();

    vector<vector<int>> v(4, vector<int>(N+1));

    for(int i=1; i<=N; i++) {
        if(str[i-1] == 'A') v[0][i]++;
        else if(str[i-1] == 'T') v[1][i]++;
        else if(str[i-1] == 'G') v[2][i]++;
        else if(str[i-1] == 'C') v[3][i]++;

        for(int j=0; j<4; j++) v[j][i] += v[j][i-1];
    }

    int M; cin >> M;

    while(M--) {
        int a, b; cin >> a >> b;

        vector<pair<int, int>> u;

        for(int i=0; i<4; i++)
            u.push_back({v[i][b] - v[i][a-1], 3-i});

        sort(u.begin(), u.end(), greater<pair<int, int>>());

        for(int i=0; i<4; i++) {
            if(u[i].second == 3) cout << 'A';
            else if(u[i].second == 2) cout << 'T';
            else if(u[i].second == 1) cout << 'G';
            else if(u[i].second == 0) cout << 'C';
        }

        cout << "\n";
    }
}
