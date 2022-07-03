#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { double x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<P> v(N);
    for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

    double ans = 0;
    for(int i=1; i<N-1; i++)
        ans += 0.5 * (v[0].x * (v[i].y - v[i+1].y) + v[i].x * (v[i+1].y - v[0].y) + v[i+1].x * (v[0].y - v[i].y));

    ans = abs(ans);

    cout << fixed;
    cout.precision(1);

    cout << ans << "\n";
}
