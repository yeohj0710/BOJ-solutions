#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    vector<int> w(N);

    for(int i=0; i<N; i++) w[i] = abs(v[i] - u[i]);

    int ans = w[0];

    for(int i=0; i<N; i++) ans = __gcd(ans, w[i]);

    cout << ans << "\n";
}
