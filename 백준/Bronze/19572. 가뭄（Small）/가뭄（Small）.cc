#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(1);

    double a, b, c; cin >> a >> b >> c;

    double x = (a + b + c)/2 - c;
    double y = (a + b + c)/2 - b;
    double z = (a + b + c)/2 - a;

    if(x > 0 && y > 0 && z > 0) {
        cout << "1\n";
        cout << x << " " << y << " " << z << "\n";
    }
    else cout << "-1\n";
}
