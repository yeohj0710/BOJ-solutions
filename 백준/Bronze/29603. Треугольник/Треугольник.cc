#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<pair<int, int>> v(3);

    for(int i=0; i<3; i++)
        cin >> v[i].first >> v[i].second;

    for(int i=0; i<3; i++) {
        int j = (i + 1) % 3;
        int k = (i + 2) % 3;

        int x = v[i].first + (v[j].first - v[k].first);
        int y = v[i].second + (v[j].second - v[k].second);

        cout << x << " " << y << "\n";
    }
}
