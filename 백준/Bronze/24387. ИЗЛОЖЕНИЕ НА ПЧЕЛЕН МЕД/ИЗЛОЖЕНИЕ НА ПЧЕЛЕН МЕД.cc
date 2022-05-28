#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(3), u(3);

    for(int i=0; i<3; i++) cin >> v[i];
    for(int i=0; i<3; i++) cin >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int ans = 0;
    for(int i=0; i<3; i++) ans += v[i]*u[i];

    cout << ans << "\n";
}
