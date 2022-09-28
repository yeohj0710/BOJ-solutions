#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
double M, K;
vector<double> v, u, w;
struct s { double a, b, c; };

s f(double m) {
    double Min = LLONG_MAX;

    for(int i=0; i<N; i++)
        Min = min(Min, (w[i] - m * v[i]) / u[i]);

    return {m * M + Min * K, m, Min};
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    cin >> N >> M >> K;

    v.resize(N);
    u.resize(N);
    w.resize(N);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];
    for(int i=0; i<N; i++) cin >> w[i];

    double l = 0, r = LLONG_MAX, tr = 1e2;

    for(int i=0; i<N; i++) r = min(r, w[i] / v[i]);

    while(tr--) {
        double m1 = (l*2 + r) / 3;
        double m2 = (l + r*2) / 3;

        if(f(m1).a < f(m2).a) l = m1;
        else r = m2;
    }

    double m = (l + r) / 2;

    cout << f(m).a << "\n";
    cout << f(m).b << " " << f(m).c << "\n";
}
