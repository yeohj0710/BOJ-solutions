#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        char a, b; int x, y;
        cin >> a >> x >> b >> y;
        if(x == 0 && y == 0) break;

        string str = "";
        while(y > 0) {
            y--;
            str = char('A' + (y % 26)) + str;
            y /= 26;
        }

        cout << str << x << "\n";
    }
}
