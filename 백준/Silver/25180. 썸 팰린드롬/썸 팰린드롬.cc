#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    int ans = N / 18 * 2;

    N = N % 18;

    if(N >= 1 && N <= 9) ans++;
    else if(N >= 10) {
        if(N % 2 == 0) ans += 2;
        else ans += 3;
    }

    cout << ans << "\n";
}
