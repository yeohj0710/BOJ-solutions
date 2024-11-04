#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, a, b; cin >> n >> a >> b;

    while(n--) {
        char x, y; cin >> x >> y;

        if(x == 'Y') {
            cout << "Y ";
            a--, b++;
        }
        else {
            if(b == 0) {
                cout << "Y ";
                a--, b++;
            }
            else {
                cout << "N ";
            }
        }

        if(y == 'Y') {
            cout << "Y\n";
            b--, a++;
        }
        else {
            if(a == 0) {
                cout << "Y\n";
                b--, a++;
            }
            else {
                cout << "N\n";
            }
        }
    }
}
