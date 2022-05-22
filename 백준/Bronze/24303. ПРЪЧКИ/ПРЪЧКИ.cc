#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;

    int ans = INT_MAX;
    for(int i=0; i<=d; i++)
        for(int j=0; j<=e; j++)
            for(int k=0; k<=f; k++)
                if(a*i + b*j + c*k >= g) ans = min(ans, i+j+k);

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << 0 << "\n";
}
