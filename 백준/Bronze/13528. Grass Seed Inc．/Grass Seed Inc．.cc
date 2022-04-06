#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double p, n; cin >> p >> n;

    double sum = 0;
    while(n--) {
        double a, b; cin >> a >> b;
        sum += a * b;
    }

    cout << fixed;
    cout.precision(7);

    cout << sum * p;
}
