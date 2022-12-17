#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<pair<int, int>> v(N);
        for(int i=0; i<N; i++) cin >> v[i].second >> v[i].first;

        sort(v.begin(), v.end());

        int e = 0, ans = 0;

        for(int i=0; i<v.size(); i++)
            if(v[i].second >= e) {
                ans++;
                e = v[i].first;
            }

        cout << ans << "\n";
    }
}
