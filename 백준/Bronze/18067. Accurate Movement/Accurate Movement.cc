#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, N; cin >> a >> b >> N;

    int x = a, y = b, ans = 0;

    while(true) {
        x = y;
        ans++;

        if(x >= N) break;

        y += b - a;
        ans++;
    }

    cout << ans << "\n";
}
