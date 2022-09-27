#include <bits/stdc++.h>
#define int long long
using namespace std;

double f(vector<double> v, vector<double> u, double m) {
    double sum = 0;

    for(int i=0; i<v.size(); i++)
        sum += abs(v[i] * m - u[i]);

    return sum;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(9);

    int N; cin >> N;

    vector<double> v(N), u(N);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    double l = 0, r = 1e6;
    double Min = INT_MAX, tr = 1e3;

    while(tr--) {
        double m1 = (l*2 + r) / 3;
        double m2 = (l + r*2) / 3;

        double a = f(v, u, m1);
        double b = f(v, u, m2);

        if(tr == 0) cout << a << "\n";
        else if(a > b) l = m1;
        else r = m2;
    }
}
