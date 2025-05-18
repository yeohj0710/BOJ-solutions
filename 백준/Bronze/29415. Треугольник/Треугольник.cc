#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    n *= 2;

    int ans = 0;

    for(int i=1; i*i<=n; i++) {
        if(n % i != 0) continue;

        int j = n / i;

        double x = sqrt(i * i + j * j);

        if(x == (int)x) ans++;
    }

    cout << ans << "\n";
}
