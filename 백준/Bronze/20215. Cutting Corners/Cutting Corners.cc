#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a, b; cin >> a >> b;

    cout << fixed;
    cout.precision(6);

    cout << a + b - sqrt(a*a + b*b) << "\n";
}
