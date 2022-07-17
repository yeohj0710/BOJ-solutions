#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> v;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    v.resize(N+1);

    for(int i=0; i<N; i++) {
        int a, b; cin >> a >> b;

        v[b].push_back(a);
    }

    for(int i=1; i<=N; i++)
        sort(v[i].begin(), v[i].end());

    int ans = 0;
    for(int i=1; i<=N; i++) {
        if(v[i].size() < 2) continue;

        for(int j=0; j<v[i].size(); j++) {
            if(j == 0 && j+1 < v[i].size()) ans += v[i][j+1] - v[i][j];
            else if(j == v[i].size()-1 && j-1 >= 0) ans += v[i][j] - v[i][j-1];
            else ans += min(v[i][j] - v[i][j-1], v[i][j+1] - v[i][j]);
        }
    }

    cout << ans << "\n";
}
