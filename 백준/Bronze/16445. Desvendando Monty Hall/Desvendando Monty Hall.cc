#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;
    while(N--) {
        int x; cin >> x;

        if(x == 2 || x == 3) ans++;
    }

    cout << ans << "\n";
}
