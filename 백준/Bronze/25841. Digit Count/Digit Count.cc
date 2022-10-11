#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    int ans = 0;

    for(int i=a; i<=b; i++) {
        int x = i;

        while(x > 0) {
            if(x % 10 == c) ans++;

            x /= 10;
        }
    }

    cout << ans << "\n";
}
