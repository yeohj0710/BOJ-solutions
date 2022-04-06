#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t; cin >> t;

    while(t--) {
        double a1, b1, c1, a2, b2, c2;
        cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

        double A = 0, B = 0;
        A = a1*b2 + b1*c2 + c1*a2;
        B = a2*b1 + b2*c1 + c2*a1;

        if(A > B) cout << "ADAM\n";
        else if(A < B) cout << "GOSIA\n";
        else cout << "=\n";
    }
}
