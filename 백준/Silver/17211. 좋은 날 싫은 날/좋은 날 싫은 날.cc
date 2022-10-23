#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(0);

    int N, M; cin >> N >> M;

    double x, y;

    if(M == 0) x = 1, y = 0;
    else x = 0, y = 1;

    double a, b, c, d; cin >> a >> b >> c >> d;

    for(int i=0; i<N; i++) {
        double xx = x * a + y * c;
        double yy = x * b + y * d;

        x = xx, y = yy;
    }

    cout << x * 1000 << "\n";
    cout << y * 1000 << "\n";
}
