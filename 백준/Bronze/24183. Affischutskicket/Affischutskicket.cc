#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a, b, c; cin >> a >> b >> c;

    double sum = 0.229*0.324*a*2 + 0.297*0.420*b*2 + 0.210*0.297*c;

    cout << fixed;
    cout.precision(5);
    cout << sum;
}
