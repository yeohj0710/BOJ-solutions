#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<pair<string, char>> v(8);

    for(int i=0; i<v.size(); i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    int r = 0, b = 0;

    vector<int> score = {10, 8, 6, 5, 4, 3, 2, 1, 0};

    for(int i=0; i<v.size(); i++) {
        if(v[i].second == 'R') r += score[i];
        else b += score[i];
    }

    cout << (r > b ? "Red" : "Blue") << "\n";
}
