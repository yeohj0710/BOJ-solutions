#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=1; i<N; i++)
        ans += (v[i-1] + v[i]) * (v[i-1] + v[i]) + abs(v[i-1] - v[i]) * abs(v[i-1] - v[i]);

    cout << ans << "\n";
}
