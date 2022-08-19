#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v;
    set<pair<int, int>> s;

    for(int i=0; i<N; i++) {
        int x, y; cin >> x >> y;

        v.push_back({x, y});
        s.insert({x, y});
    }

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            if(v[i].first == v[j].first || v[i].second == v[j].second) continue;

            if(s.count({v[i].first, v[j].second}) > 0 && s.count({v[j].first, v[i].second})) ans++;
        }

    ans /= 2;

    cout << ans << "\n";
}
