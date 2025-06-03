#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    struct s { string a; int b; };
    vector<s> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i].a >> v[i].b;

    auto cmp = [&](s x, s y) { return x.b < y.b; };

    sort(v.begin(), v.end(), cmp);

    vector<vector<string>> u(4);

    for(int i=0; i<n; i++) u[i % 4].push_back(v[i].a);

    for(int i=0; i<4; i++) {
        sort(u[i].begin(), u[i].end());

        cout << i + 1 << " ";

        for(int j=0; j<u[i].size(); j++) cout << u[i][j] << " ";
        cout << "\n";
    }
}
