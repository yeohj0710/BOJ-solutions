#include <bits/stdc++.h>
#define int long long
using namespace std;

double dis(pair<int, int> a, pair<int, int> b) {
    return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    map<pair<pair<int, int>, pair<int, int>>, bool> m;

    double ans = 0;

    while(N--) {
        vector<pair<int, int>> v(3);

        for(int i=0; i<3; i++) cin >> v[i].first >> v[i].second;

        sort(v.begin(), v.end());

        if(!m[{v[0], v[1]}]) ans += dis(v[0], v[1]);
        else ans -= dis(v[0], v[1]);

        m[{v[0], v[1]}] = true;

        if(!m[{v[1], v[2]}]) ans += dis(v[1], v[2]);
        else ans -= dis(v[1], v[2]);

        m[{v[1], v[2]}] = true;

        if(!m[{v[0], v[2]}]) ans += dis(v[0], v[2]);
        else ans -= dis(v[0], v[2]);

        m[{v[0], v[2]}] = true;
    }

    cout << fixed << setprecision(4);

    cout << ans << "\n";
}
