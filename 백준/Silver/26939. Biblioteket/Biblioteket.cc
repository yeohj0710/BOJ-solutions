#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v, u;
    int Max = 0;

    while(N--) {
        int x; cin >> x;

        if(x >= 0) v.push_back(x);
        else u.push_back(-x);

        Max = max(Max, abs(x));
    }

    sort(v.begin(), v.end(), greater<int>());
    sort(u.begin(), u.end(), greater<int>());

    int ans = -Max;

    for(int i=0; i<v.size(); i+=M) ans += v[i] * 2;
    for(int i=0; i<u.size(); i+=M) ans += u[i] * 2;

    cout << ans << "\n";
}
