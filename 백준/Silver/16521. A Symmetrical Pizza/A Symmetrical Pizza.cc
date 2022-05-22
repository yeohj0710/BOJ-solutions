#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a; cin >> a;

    int b = 0;
    for(int i=0; i<a.length(); i++) {
        if(a[i] != '.') {
            b *= 10;
            b += a[i] - '0';
        }
    }

    int gcd = __gcd(b, (int)36000);

    cout << 36000 / gcd << "\n";
}
