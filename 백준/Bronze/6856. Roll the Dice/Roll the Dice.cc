#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int ans = 0;

    for(int i=1; i<=a; i++)
        for(int j=1; j<=b; j++)
            if(i + j == 10) ans++;

    if(ans != 1) cout << "There are " << ans << " ways to get the sum 10.\n";
    else cout << "There is 1 way to get the sum 10.\n";
}
