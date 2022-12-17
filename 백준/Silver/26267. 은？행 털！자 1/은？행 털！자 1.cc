#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    unordered_map<int, int> m;
    vector<int> v;

    for(int i=0; i<N; i++) {
        int a, b, c; cin >> a >> b >> c;

        if(m[b-a] == 0) v.push_back(b-a);

        m[b-a] += c;
    }

    int ans = 0;
    for(int i=0; i<v.size(); i++) ans = max(ans, m[v[i]]);

    cout << ans << "\n";
}
