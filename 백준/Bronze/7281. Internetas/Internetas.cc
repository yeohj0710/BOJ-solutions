#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v;

    while(N--) {
        int a, b; cin >> a >> b;

        if(b == 1) v.push_back(a);
    }

    int ans = 0;

    for(int i=1; i<v.size(); i++)
        ans = max(ans, v[i] - v[i-1]);

    cout << ans << "\n";
}
