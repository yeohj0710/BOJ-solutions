#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(6);
    for(int i=0; i<6; i++) cin >> v[i];

    vector<pair<int, string>> u(3);

    u[0] = { v[0] * v[3], "Joffrey" };
    u[1] = { v[1] * v[4], "Robb" };
    u[2] = { v[2] * v[5], "Stannis" };

    if(u[0].first < u[1].first) swap(u[0], u[1]);
    if(u[1].first < u[2].first) swap(u[1], u[2]);
    if(u[0].first < u[1].first) swap(u[0], u[1]);

    int mx = 0;
    for(int i=0; i<3; i++) mx = max(mx, u[i].first);

    for(int i=0; i<3; i++)
        if(u[i].first == mx) cout << u[i].second << " ";
    cout << "\n";
}
