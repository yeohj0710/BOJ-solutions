#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    vector<int> u = v;

    u.erase(unique(u.begin(), u.end()), u.end());

    int cnt = 0;

    for(int i=0; i<v.size(); i++)
        if(v[i] == u[2]) cnt++;

    cout << u[2] << " " << cnt << "\n";
}
