#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(5);

    double a, b; cin >> a >> b;

    int T; cin >> T;

    while(T--) {
        double x; char c; cin >> x >> c;

        if(c == 'A') cout << x * b / a << "\n";
        else cout << x * a / b << "\n";
    }
}
