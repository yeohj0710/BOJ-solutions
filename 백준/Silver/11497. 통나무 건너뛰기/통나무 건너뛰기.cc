#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> u(N);
    int l = 0, r = N-1;

    for(int i=0; i<N; i++) {
        if(i % 2 == 0) u[l] = v[i], l++;
        else u[r] = v[i], r--;
    }

    int ans = 0;
    for(int i=0; i<N; i++)
        ans = max(ans, abs(u[i] - u[(i+1) % N]));

    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) solve();
}
