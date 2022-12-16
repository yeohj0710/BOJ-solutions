#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int a, b; cin >> a >> b;

    int ans = 0;

    for(int i=a; i<=b; i++) {
        int cnt = 0;

        for(int j=1; j*j<=i; j++)
            if(i % j == 0) {
                cnt++;
                if(j*j < i) cnt++;
            }

        if(cnt == 4) ans++;
    }

    cout << "The number of RSA numbers between " << a << " and " << b << " is " << ans << "\n";
}
