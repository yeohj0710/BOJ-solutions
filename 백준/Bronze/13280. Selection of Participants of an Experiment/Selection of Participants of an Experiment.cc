#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];
        sort(v.begin(), v.end());

        int ans = INT_MAX;
        for(int i=1; i<v.size(); i++) ans = min(ans, v[i] - v[i-1]);

        cout << ans << "\n";
    }
}
