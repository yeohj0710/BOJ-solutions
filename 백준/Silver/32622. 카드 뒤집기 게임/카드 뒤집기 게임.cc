#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int ans = 0, cnt = 1;
    vector<int> u;

    for(int i=1; i<n; i++) {
        if(v[i] == v[i-1]) cnt++;
        else {
            ans = max(ans, cnt);
            u.push_back(cnt);
            cnt = 1;
        }
    }
    ans = max(ans, cnt);
    u.push_back(cnt);

    for(int i=1; i<u.size(); i++) {
        ans = max(ans, u[i] + u[i-1]);
    }

    cout << ans << "\n";
}
