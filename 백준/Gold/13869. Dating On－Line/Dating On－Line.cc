#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(3);

    int N; cin >> N;

    vector<double> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    double ans = v[0] * v[1] + v[N-2] * v[N-1];

    for(int i=0; i+2<N; i++) ans += v[i] * v[i+2];

    ans = ans * 0.5 * sin(M_PI * 2 / N);

    cout << ans << "\n";
}
