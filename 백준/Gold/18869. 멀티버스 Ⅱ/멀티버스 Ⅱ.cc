#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int M, N; cin >> M >> N;

    vector<vector<int>> v(M, vector<int>(N)), u(v), w(v);

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            cin >> v[i][j];
            u[i][j] = v[i][j];
            }

        sort(u[i].begin(), u[i].end());
        u[i].erase(unique(u[i].begin(), u[i].end()), u[i].end());

        for(int j=0; j<v[i].size(); j++)
            w[i][j] = lower_bound(u[i].begin(), u[i].end(), v[i][j]) - u[i].begin();
    }

    int ans = 0;

    for(int i=0; i<M; i++)
        for(int j=i+1; j<M; j++)
            if(w[i] == w[j]) ans++;

    cout << ans << "\n";
}
