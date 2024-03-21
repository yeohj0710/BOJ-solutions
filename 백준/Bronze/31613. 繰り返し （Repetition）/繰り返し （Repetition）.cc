#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int ans = 0;

    while(a < b) {
        if(a % 3 == 0) a++;
        else if(a % 3 == 1) a *= 2;
        else if(a % 3 == 2) a *= 3;

        ans++;
    }

    cout << ans << "\n";
}
