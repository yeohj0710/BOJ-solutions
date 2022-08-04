#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double w, l, d; cin >> w >> l >> d;

    vector<double> v(200);
    v[100] = 1;

    for(int i=0; i<20; i++) {
        vector<double> u(200);

        for(int j=80; j<=120; j++)
            u[j] = v[j-1]*w + v[j]*d + v[j+1]*l;

        v = u;
    }

    cout << fixed;
    cout.precision(8);

    double ans = 0;
    for(int i=80; i<90; i++) ans += v[i];
    cout << ans << "\n";

    ans = 0;
    for(int i=90; i<100; i++) ans += v[i];
    cout << ans << "\n";

    ans = 0;
    for(int i=100; i<110; i++) ans += v[i];
    cout << ans << "\n";

    ans = 0;
    for(int i=110; i<120; i++) ans += v[i];
    cout << ans << "\n";

    ans = 0;
    for(int i=120; i<140; i++) ans += v[i];
    cout << ans << "\n";
}
