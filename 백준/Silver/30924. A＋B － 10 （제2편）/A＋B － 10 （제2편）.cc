#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a = 1e4, b = 1e4;

    for(int i=1; i<=9999; i++) {
        if(i == 4813) continue;
    
        cout << "? A " << i << endl;

        int x; cin >> x;

        if(x == 1) {
            a = i;
            break;
        }
    }

    for(int i=1; i<=9999; i++) {
        cout << "? B " << i << endl;

        int x; cin >> x;

        if(x == 1) {
            b = i;
            break;
        }
    }

    cout << "! " << a + b << endl;
}
