#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        double a, b; cin >> a >> b;

        b = b / ((a/100) * (a/100));

        if(a >= 161 && a < 204 && b >= 20 && b < 25) cout << 1 << "\n";
        else if(a >= 161 && a < 204 && ((b >= 18.5 && b < 20) || (b >= 25 && b < 30))) cout << 2 << "\n";
        else if(a >= 161 && a < 204 && ((b >= 16 && b < 18.5) || (b >= 30 && b < 35))) cout << 3 << "\n";
        else if(a >= 159 && a < 161 && b >= 16 && b < 35) cout << 3 << "\n";
        else if(a >= 204) cout << 4 << "\n";
        else if(a >= 161 && a < 204 && (b < 16 || b >= 35)) cout << 4 << "\n";
        else if(a >= 159 && a < 161 && (b < 16 || b >= 35)) cout << 4 << "\n";
        else if(a >= 146 && a < 159) cout << 4 << "\n";
        else if(a >= 140.1 && a < 146) cout << 5 << "\n";
        else if(a < 140.1) cout << 6 << "\n";
    }
}
