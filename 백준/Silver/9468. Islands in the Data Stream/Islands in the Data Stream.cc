#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int t; cin >> t;

        vector<int> v(15);
        for(int i=0; i<15; i++) cin >> v[i];

        int ans = 0;
        for(int i=1; i<15; i++)
            if(v[i] > v[i-1]) ans++;

        cout << t << " " << ans << "\n";
    }
}
