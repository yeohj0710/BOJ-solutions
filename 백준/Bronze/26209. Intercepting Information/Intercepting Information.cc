#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    bool check = false;

    for(int i=0; i<8; i++) {
        int x; cin >> x;

        if(x == 9) check = true;
    }

    if(check) cout << "F\n";
    else cout << "S\n";
}
