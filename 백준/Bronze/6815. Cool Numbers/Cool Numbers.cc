#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int a, b; cin >> a >> b;

    int ans = 0;

    for(int i=1; i*i*i<=b; i++)
        for(int j=1; j*j<=i*i*i; j++)
            if(i*i*i == j*j && a <= i*i*i && i*i*i <= b) ans++;

    cout << ans << "\n";
}
