#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(3);

    for(int i=0; i<3; i++) cin >> v[i];

    int x; cin >> x;

    sort(v.begin(), v.end());

    int ans = 1;

    while(true) {
        int num = v[0] * 100 + v[1] * 10 + v[2];

        if(num == x) {
            cout << ans << "\n";
            return 0;
        }

        ans++;

        if(!next_permutation(v.begin(), v.end())) break;
    }
}
