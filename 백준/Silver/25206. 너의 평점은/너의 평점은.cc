#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double x = 0, y = 0;

    for(int i=0; i<20; i++) {
        string a, c; double b;
        cin >> a >> b >> c;

        if(c == "A+") x += 4.5 * b;
        else if(c == "A0") x += 4.0 * b;
        else if(c == "B+") x += 3.5 * b;
        else if(c == "B0") x += 3.0 * b;
        else if(c == "C+") x += 2.5 * b;
        else if(c == "C0") x += 2.0 * b;
        else if(c == "D+") x += 1.5 * b;
        else if(c == "D0") x += 1.0 * b;

        if(c != "P") y += b;
    }

    cout << fixed;
    cout.precision(4);

    cout << x / y << "\n";
}
