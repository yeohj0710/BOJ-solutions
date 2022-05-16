#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(7);

    int N; cin >> N;

    vector<double> u(N+1), v(N);
    for(int i=0; i<N+1; i++) cin >> u[i];
    for(int i=0; i<N; i++) cin >> v[i];

    double ans = 0;
    for(int i=0; i<N; i++) ans += (u[i] + u[i+1]) * v[i] / 2;

    cout << ans << "\n";
}
