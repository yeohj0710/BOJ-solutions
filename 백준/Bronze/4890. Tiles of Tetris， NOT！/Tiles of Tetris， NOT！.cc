#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b; cin >> a >> b;
        if(a == 0 && b == 0) break;

        cout << (a/__gcd(a, b))*(b/__gcd(a, b)) << "\n";
    }
}
