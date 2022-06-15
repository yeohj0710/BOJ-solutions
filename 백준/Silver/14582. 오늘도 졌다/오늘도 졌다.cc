#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(9), u(9);

    for(int i=0; i<9; i++) cin >> v[i];
    for(int i=0; i<9; i++) cin >> u[i];

    int a = 0, b = 0;
    bool b1 = false, b2 = false;

    for(int i=0; i<9; i++) {
        a += v[i];

        if(a > b) b1 = true;

        b += u[i];
    }

    if(a < b) b2 = true;

    if(b1 && b2) cout << "Yes\n";
    else cout << "No\n";
}
