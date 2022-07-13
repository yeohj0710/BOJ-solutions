#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a = 0, b = 0;

    for(int i=0; i<3; i++) {
        int x; cin >> x;

        if(x == 1) a++;
        else b++;
    }

    if(a > b) cout << 1 << "\n";
    else cout << 2 << "\n";
}
