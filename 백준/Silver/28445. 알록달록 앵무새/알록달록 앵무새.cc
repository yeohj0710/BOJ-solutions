#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    set<pair<string, string>> s;

    vector<string> v(4);
    for(int i=0; i<4; i++) cin >> v[i];

    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            s.insert({v[i], v[j]});

    vector<pair<string, string>> u(s.begin(), s.end());

    sort(u.begin(), u.end());

    for(int i=0; i<u.size(); i++)
        cout << u[i].first << " " << u[i].second << "\n";
}
