#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    if(a > 0 && b > 0) cout << 1 << "\n";
    else if(a < 0 && b > 0) cout << 2 << "\n";
    else if(a < 0 && b < 0) cout << 3 << "\n";
    else if(a > 0 && b < 0) cout << 4 << "\n";
}
