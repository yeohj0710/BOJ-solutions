#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        double a; cin >> a;
        if(a == 0) break;

        double b, c; cin >> b >> c;

        cout << "Pizza " << t << " ";

        if(pow(a*2, 2) >= b*b + c*c) cout << "fits on the table.\n";
        else cout << "does not fit on the table.\n";
    }
}
