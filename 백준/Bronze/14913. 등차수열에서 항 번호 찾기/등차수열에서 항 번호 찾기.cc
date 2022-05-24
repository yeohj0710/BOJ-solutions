#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    if((c-a)%b != 0 || (c-a)/b < 0) cout << "X\n";
    else cout << (c-a)/b + 1 << "\n";
}
