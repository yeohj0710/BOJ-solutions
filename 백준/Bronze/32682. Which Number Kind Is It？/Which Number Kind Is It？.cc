#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int x; cin >> x;

        if(x % 2 == 1 && pow((int)sqrt(x), 2) == x) cout << "OS\n";
        else if(x % 2 == 1) cout << "O\n";
        else if(pow((int)sqrt(x), 2) == x) cout << "S\n";
        else cout << "EMPTY\n";
    }
}
