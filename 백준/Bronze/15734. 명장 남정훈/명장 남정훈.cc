#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    if(a == b) cout << a + b + (c/2) * 2 << "\n";
    else if(a < b) {
        if(c <= b-a) cout << (a + c) * 2 << "\n";
        else cout << b * 2 + ((c-(b-a))/2) * 2 << "\n";
    }
    else if(a > b) {
        if(c <= a-b) cout << (b + c) * 2 << "\n";
        else cout << a * 2 + ((c-(a-b))/2) * 2 << "\n";
    }
}
