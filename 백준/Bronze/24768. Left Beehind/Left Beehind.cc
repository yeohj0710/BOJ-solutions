#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b; cin >> a >> b;
        if(a == 0 && b == 0) break;

        if(a + b == 13) cout << "Never speak again.\n";
        else if(a > b) cout << "To the convention.\n";
        else if(a < b) cout << "Left beehind.\n";
        else if(a == b) cout << "Undecided.\n";
    }
}
