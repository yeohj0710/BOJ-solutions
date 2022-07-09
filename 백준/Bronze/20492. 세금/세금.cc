#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x; cin >> x;

    cout << x * 78 / 100 << " " << (x * 8 / 10) + (x * 2 / 10 * 78 / 100) << "\n";
}
