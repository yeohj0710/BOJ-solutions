#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt = 0;

    for(int i=0; i<N; i++) {
        double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        if(floor(x1) != floor(x2)) cnt++;
    }

    double ans = 2.0 / ((double)cnt / N);

    cout << fixed;
    cout.precision(6);

    cout << ans << "\n";
}
