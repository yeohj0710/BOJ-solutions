#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v;
    unordered_map<int, int> mx, my;

    for(int i=0; i<N; i++) {
        int x, y; cin >> x >> y;

        v.push_back({x, y});

        mx[x]++;
        my[y]++;
    }

    int ans = 0;

    for(int i=0; i<N; i++) {
        ans += (mx[v[i].first] - 1) * (my[v[i].second] - 1);
    }

    cout << ans << "\n";
}
