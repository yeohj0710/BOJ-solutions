#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    vector<int> v, u;

    for(int i=0; i<N; i++) {
        if(str[i] == 'B') v.push_back(i);
        else u.push_back(i);
    }

    vector<pair<int, int>> w(N);
    for(int i=0; i<N; i++) cin >> w[i].first >> w[i].second;

    double ans = 0;

    for(int i=0; i<v.size(); i++) {
        int x = v[i];
        int y = v[(i + v.size() / 2) % v.size()];

        ans += sqrt(pow(w[x].first - w[y].first, 2) + pow(w[x].second - w[y].second, 2));
    }

    for(int i=0; i<u.size(); i++) {
        int x = u[i];
        int y = u[(i + u.size() / 2) % u.size()];

        ans += sqrt(pow(w[x].first - w[y].first, 2) + pow(w[x].second - w[y].second, 2));
    }

    ans /= 2;

    cout << fixed << setprecision(6);
    cout << ans << "\n";
}
