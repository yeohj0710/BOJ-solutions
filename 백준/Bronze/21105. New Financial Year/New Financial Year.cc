#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    int T; cin >> T;

    while(T--) {
        double a, b; cin >> a >> b;

        cout << a / (b/100 + 1) << "\n";
    }
}
