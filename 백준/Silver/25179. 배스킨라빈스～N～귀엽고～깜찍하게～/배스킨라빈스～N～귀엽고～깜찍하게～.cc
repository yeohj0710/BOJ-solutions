#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    if((a - 1) % (b + 1) == 0) cout << "Can't win\n";
    else cout << "Can win\n";
}
