#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<double> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    double ans = 0;

    for(int i=0; i<N-1; i++) ans += v[i]/2;
    ans += v[N-1];

    cout << fixed;
    cout.precision(5);

    cout << ans << "\n";
}
