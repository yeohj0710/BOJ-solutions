#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int ans = 1;
    for(int i=1; i<=b; i++) ans += i * (a - 2) + 1;

    cout << ans << "\n";
}
