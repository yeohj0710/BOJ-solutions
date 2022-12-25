#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(6);

    int N; cin >> N;

    double Min = DBL_MAX, Max = DBL_MIN, sum = 0;

    while(N--) {
        int a, b; cin >> a >> b;

        double x = (double)a / b;

        Min = min(Min, x);
        Max = max(Max, x);
        sum += x;
    }

    cout << Min << " " << Max << " " << sum << "\n";
}
