#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    while(v.size() > 1) {
        sort(v.begin(), v.end());

        vector<int> u;
        u.push_back(v[0] + v[1]);
        ans += v[0] * v[1];

        for(int i=2; i<v.size(); i++) u.push_back(v[i]);

        v = u;
    }

    cout << ans << "\n";
}
