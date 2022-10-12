#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    int x = a + b * c;
    int y = a * b;

    if(x == y) cout << 0 << "\n";
    else if(x > y) cout << 1 << "\n";
    else if(x < y) cout << 2 << "\n";
}
