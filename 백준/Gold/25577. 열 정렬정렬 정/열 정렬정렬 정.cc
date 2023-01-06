#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N), u(N);
    for(int i=0; i<N; i++) {
        cin >> v[i];
        u[i] = v[i];
    }

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    vector<int> w(N+1);
    for(int i=0; i<v.size(); i++)
        w[i+1] = lower_bound(u.begin(), u.end(), v[i]) - u.begin() + 1;

    vector<bool> vis(N+1);
    int ans = 0;

    for(int i=1; i<=N; i++) {
        if(vis[i]) continue;

        int cnt = 0, x = i;

        while(!vis[x]) {
            vis[x] = true;

            x = w[x];
            cnt++;
        }

        ans += cnt - 1;
    }

    cout << ans << "\n";
}
