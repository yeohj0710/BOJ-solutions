#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    int sum = 0, ans = 0;

    while(N--) {
        int x; cin >> x;

        int y = min(30 - sum, x);

        if(y * 2 >= x) ans++;

        sum += y;

        if(sum == 30) sum = 0;
    }

    cout << ans << "\n";
}
