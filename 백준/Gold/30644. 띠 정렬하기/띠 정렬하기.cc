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

    vector<int> w(N);
    for(int i=0; i<v.size(); i++)
        w[i] = lower_bound(u.begin(), u.end(), v[i]) - u.begin();

    int ans = N-1;

    for(int i=1; i<N; i++)
        if(abs(w[i] - w[i-1]) == 1) ans--;

    cout << ans << "\n";
}
