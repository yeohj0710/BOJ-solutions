#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    if(a1 < b1) swap(a1, b1), swap(a2, b2);
    if(a1 < c1) swap(a1, c1), swap(a2, c2);

    for(int i=a2; i<1e8; i+=a1) {
        if(i % b1 == b2 && i % c1 == c2) {
            cout << i << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}
