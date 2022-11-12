#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        int x = a * b;
        int y = c * d;

        if(x > y) cout << "TelecomParisTech\n";
        else if(x < y) cout << "Eurecom\n";
        else cout << "Tie\n";
    }
}
