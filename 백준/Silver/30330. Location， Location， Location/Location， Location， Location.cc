#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N), u(N);

    for(int i=0; i<N; i++) cin >> v[i] >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    cout << v[(N - 1) / 2] << " " << u[(N - 1) / 2] << "\n";
}
