#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(4);

    for(int i=1; i*i*i*i*i<N; i++) v[0].push_back(i*i*i*i*i);
    for(int i=1; i*i*i*i<N; i++) v[1].push_back(i*i*i*i);
    for(int i=1; i*i*i<N; i++) v[2].push_back(i*i*i);
    for(int i=1; i*i<N; i++) v[3].push_back(i*i);

    vector<int> u, w;

    for(int i=0; i<v[1].size(); i++)
        for(int j=0; j<v[2].size(); j++)
                u.push_back(v[1][i] + v[2][j]);

    for(int i=0; i<v[0].size(); i++)
        for(int j=0; j<v[3].size(); j++)
                w.push_back(v[0][i] + v[3][j]);

    sort(u.begin(), u.end());
    sort(w.begin(), w.end());

    int ans = 0;

    for(int i=0; i<u.size(); i++) {
        ans += lower_bound(w.begin(), w.end(), N - u[i]) - w.begin();
    }

    cout << ans << "\n";
}
