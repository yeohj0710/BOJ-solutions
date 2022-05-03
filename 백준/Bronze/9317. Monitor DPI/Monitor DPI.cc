#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    while(true) {
        double d, rh, rv; cin >> d >> rh >> rv;

        if(d == 0 && rh == 0 && rv == 0) break;

        double w = 16.0 * d / sqrt(337);
        double h = 9.0/16.0 * w;

        cout << "Horizontal DPI: " << rh/w << "\n";
        cout << "Vertical DPI: " << rv/h << "\n";
    }
}
