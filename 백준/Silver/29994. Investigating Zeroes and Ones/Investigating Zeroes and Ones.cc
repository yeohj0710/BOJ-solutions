#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1), u(N+1);

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        if(x == 1) {
            v[i] = u[i-1] + 1;
            u[i] = v[i-1];
        }
        else {
            v[i] = v[i-1];
            u[i] = u[i-1] + 1;
        }
    }

    int ans = 0;

    for(int i=1; i<=N; i++) ans += v[i];

    cout << ans << "\n";
}
