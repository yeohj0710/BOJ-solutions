#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        vector<int> v;

        while(true) {
            int x; cin >> x;
            if(x == 0) break;

            v.push_back(x);
        }

        sort(v.begin(), v.end(), greater<int>());

        int ans = 0;
        for(int i=0; i<v.size(); i++) {
            ans += pow(v[i], i+1) * 2;
            if(ans > (int)(5e6)) break;
        }

        if(ans <= (int)(5e6)) cout << ans << "\n";
        else cout << "Too expensive\n";
    }
}
