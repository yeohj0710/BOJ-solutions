#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x, y; cin >> x >> y;

    int sum = 0, ans = 0;

    while(true) {
        sum += x;

        if(sum > y) break;

        ans++;
        x *= 2;
    }

    cout << ans << "\n";
}
