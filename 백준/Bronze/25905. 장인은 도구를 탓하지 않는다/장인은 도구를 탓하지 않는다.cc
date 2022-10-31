#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    vector<double> v(10);
    for(int i=0; i<10; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<double>());

    double ans = 1;

    for(int i=0; i<9; i++) ans *= (v[i] * 10 / (i + 1));

    cout << ans << "\n";
}
