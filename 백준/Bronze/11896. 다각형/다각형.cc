#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    if(b == 1) {
        cout << 0 << "\n";
        return 0;
    }

    while(a % 2 == 1 || a <= 2) a++;
    while(b % 2 == 1) b--;

    cout << (a + b)/2 * ((b - a)/2 + 1) << "\n";
}
