#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    int a = 0, b = 0, c = 0;

    while(T--) {
        string x, y; cin >> x >> y;

        if(x == "section") {
            cout << ++a << " " << y << "\n";
            b = 0, c = 0;
        }
        else if(x == "subsection") {
            cout << a << "." << ++b << " " << y << "\n";
            c = 0;
        }
        else {
            cout << a << "." << b << "." << ++c << " " << y << "\n";
        }
    }
}
