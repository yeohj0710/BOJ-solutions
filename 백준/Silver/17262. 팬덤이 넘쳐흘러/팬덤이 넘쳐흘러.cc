#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);

    for(int i=0; i<N; i++) cin >> v[i] >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int ans = max(v[N-1] - u[0], (int)0);

    cout << ans << "\n";
}
