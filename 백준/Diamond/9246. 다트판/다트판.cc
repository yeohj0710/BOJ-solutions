#include<bits/stdc++.h>
using namespace std;

double integral(double ri, double ri1, double sigma) {
    return exp(-pow(ri, 2)/(2 * pow(sigma, 2))) - exp(-pow(ri1, 2)/(2 * pow(sigma, 2)));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(9);

    double coef[6] = {50.0, 25.0, 10.5, 31.5, 10.5, 21.0};

    double r[7] = {0};
    for(int i=1; i<7; i++) cin >> r[i];

    double sigma; cin >> sigma;

    double ans = 0;
    for(int i=0; i<6; i++) ans += coef[i] * integral(r[i], r[i+1], sigma);

    cout << ans;
}
