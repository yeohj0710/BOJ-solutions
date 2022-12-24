#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int a, b, c; cin >> a >> b >> c;

    vector<int> v;

    v.push_back(100*a + 10*b + c);
    v.push_back(100*a + 10*c + b);
    v.push_back(100*b + 10*a + c);
    v.push_back(100*b + 10*c + a);
    v.push_back(100*c + 10*a + b);
    v.push_back(100*c + 10*b + a);

    int ans = INT_MAX;

    for(int i=0; i<v.size(); i++)
        if(v[i] >= 100) ans = min(ans, v[i]);

    cout << ans << "\n";
}
