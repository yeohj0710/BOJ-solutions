#include <bits/stdc++.h>
#define int long long
using namespace std;

double N, M, K;

double f(double m) {
    return (1.0 / (N - m)) * (M - pow(m * K, 2));
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    cin >> N >> M >> K;

    double l = 0, r = N-1, tr = 1e2;

    while(tr--) {
        double m1 = (l*2 + r) / 3;
        double m2 = (l + r*2) / 3;

        if(f(m1) < f(m2)) l = m1;
        else r = m2;
    }

    double m = (l + r) / 2;

    cout << f(m) << "\n";
}
