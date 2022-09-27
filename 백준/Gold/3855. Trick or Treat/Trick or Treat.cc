#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double x, y; };

double f(vector<s> v, double m) {
    double Max = 0;

    for(int i=0; i<v.size(); i++)
        Max = max(Max, sqrt(pow(v[i].x - m, 2) + pow(v[i].y, 2)));

    return Max;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(5);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<s> v(N);
        for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

        double l = -2e5, r = 2e5, tr = 1e2;

        while(tr--) {
            double m1 = (l*2 + r) / 3;
            double m2 = (l + r*2) / 3;

            double a = f(v, m1);
            double b = f(v, m2);

            if(tr == 0) cout << l << " " << a << "\n";
            else if(a > b) l = m1;
            else r = m2;
        }
    }
}
