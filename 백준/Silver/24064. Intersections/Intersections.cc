#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a; cin >> a;

    if(a == 1) cout << "INF\n";
    else if(a < 0) cout << 1 << "\n";
    else cout << a << "\n";
}
