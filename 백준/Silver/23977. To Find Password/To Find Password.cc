#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> M >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int lcm = v[0];

    for(int i=1; i<N; i++)
        lcm = lcm * v[i] / __gcd(lcm, v[i]);

    int ans = lcm - M;

    cout << ans << "\n";
}
