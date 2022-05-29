#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    double ans = INT_MAX;

    for(int i=0; i<N; i++) {
        double x; cin >> x;
        ans = min(ans, x);
    }

    cout << fixed;
    cout.precision(2);

    cout << ans << "\n";
}
