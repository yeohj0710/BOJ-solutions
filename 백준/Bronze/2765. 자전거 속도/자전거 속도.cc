#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    for(int t=1; ; t++) {
        double a, b, c; cin >> a >> b >> c;

        if(b == 0) break;

        cout << "Trip #" << t << ": " << a*M_PI*b/5280/12 << " " << a*M_PI*b/5280/12*(3600/c) << "\n";
    }
}
