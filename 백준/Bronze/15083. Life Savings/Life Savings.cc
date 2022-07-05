#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<double> v(3);
    for(int i=0; i<3; i++) cin >> v[i];

    double a, b, c; cin >> a >> b >> c;
    if(b < c) swap(b, c);

    sort(v.begin(), v.end(), greater<double>());

    double x = (v[0] + v[1] + v[2]) * (a / 100);
    double y = v[0] * (b / 100) + v[1] * (c / 100);

    cout << fixed;
    cout.precision(2);

    if(x > y) cout << "one " << x << "\n";
    else cout << "two " << y << "\n";
}
