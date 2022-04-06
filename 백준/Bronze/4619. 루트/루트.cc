#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        double b, n; cin >> b >> n;
        if(b == 0 && n == 0) break;

        double a = pow(b, 1.0/n);

        int diff1 = abs(pow(int(a), n) - b);
        int diff2 = abs(pow(int(a)+1, n) - b);

        if(diff1 < diff2) cout << int(a) << "\n";
        else cout << int(a+1) << "\n";
    }
}
