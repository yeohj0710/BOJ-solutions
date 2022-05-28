#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(7);
    for(int i=0; i<7; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> ans(3);

    ans[0] = v[6] - v[5];
    ans[1] = v[6] - v[4];
    ans[2] = v[6] - ans[0] - ans[1];

    sort(ans.begin(), ans.end());

    for(int i=0; i<3; i++) cout << ans[i] << " ";
}
