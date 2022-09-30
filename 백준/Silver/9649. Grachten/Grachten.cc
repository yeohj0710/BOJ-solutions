#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c;

    while(cin >> a >> b >> c) {
        int x = a * b;
        int y = c - b;

        cout << x / __gcd(x, y) << "/" << y / __gcd(x, y) << "\n";
    }
}
