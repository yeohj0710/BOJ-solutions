#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a = 0, b = 0;

    while(N--) {
        int x; cin >> x;

        if(x % 2 == 0) a++;
        else b++;
    }

    int ans = min(a, b);

    b -= ans;

    if(b <= 0) {
        cout << ans << "\n";
        return 0;
    }

    ans += b/2;

    cout << ans << "\n";
}
