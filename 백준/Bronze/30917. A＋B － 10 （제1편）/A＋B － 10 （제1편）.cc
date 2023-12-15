#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b;

    for(int i=1; i<=9; i++) {
        cout << "? A " << i << endl;

        int x; cin >> x;

        if(x == 1) {
            a = i;
            break;
        }
    }

    for(int i=1; i<=9; i++) {
        cout << "? B " << i << endl;

        int x; cin >>x;

        if(x == 1) {
            b = i;
            break;
        }
    }

    cout << "! " << a + b << endl;
}
