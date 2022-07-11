#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(3), u(2);
    for(int i=0; i<3; i++) cin >> v[i];
    for(int i=0; i<2; i++) cin >> u[i];

    int ans = INT_MAX;
    for(int i=0; i<3; i++)
        for(int j=0; j<2; j++) ans = min(ans, v[i] + u[j] - 50);

    cout << ans << "\n";
}
