#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n+1);
    for(int i=1; i<=n; i++) cin >> v[i];

    vector<int> u(m);
    for(int i=0; i<m; i++) cin >> u[i];

    int mn = INT_MAX, ans = 0;

    for(int i=0; i<=n; i++) {
        int sum = 0;

        for(int j=0; j<m; j++) {
            int cur = u[j], cnt = 0;

            while(cur != i && cnt <= 20) {
                cnt++;
                cur = v[cur];
            }

            sum += cnt;
        }

        if(sum < mn) {
            mn = sum;
            ans = i;
        }
    }

    cout << ans << "\n";
}
