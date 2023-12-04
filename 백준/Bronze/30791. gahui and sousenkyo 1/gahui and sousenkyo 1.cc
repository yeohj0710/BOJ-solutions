#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(5);
    for(int i=0; i<5; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 0;

    for(int i=0; i<4; i++)
        if(v[4] - v[i] <= 1000) ans++;

    cout << ans << "\n";
}
