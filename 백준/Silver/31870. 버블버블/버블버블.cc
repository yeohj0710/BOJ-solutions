#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n), u;
    for(int i=0; i<n; i++) cin >> v[i];

    u = v;

    int ans = 0;

    for(int i=0; i<n; i++)
        for(int j=n-1; j>0; j--)
            if(v[j] < v[j-1]) {
                swap(v[j], v[j-1]);
                ans++;
            }

    int cnt = 0;

    for(int i=0; i<n; i++)
        for(int j=n-1; j>0; j--)
            if(u[j] > u[j-1]) {
                swap(u[j], u[j-1]);
                cnt++;
            }

    ans = min(ans, cnt + 1);

    cout << ans << "\n";
}
