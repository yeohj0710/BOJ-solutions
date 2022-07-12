#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a = 0, b = 0;

    for(int i=0; i<4; i++) {
        int x; cin >> x;
        a += x;
    }
    for(int i=0; i<4; i++) {
        int x; cin >> x;
        b += x;
    }

    cout << max(a, b) << "\n";
}
