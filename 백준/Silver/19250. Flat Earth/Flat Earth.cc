#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    int T; cin >> T;

    while(T--) {
        int v[8];
        for(int i=0; i<8; i++) cin >> v[i];

        cout << M_PI * v[3] * v[3] << "\n";
    }
}
