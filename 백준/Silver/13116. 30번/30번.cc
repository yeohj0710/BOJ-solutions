#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        vector<int> v;
        while(a > 0) {
            v.push_back(a);
            a /= 2;
        }

        vector<int> u;
        while(b > 0) {
            u.push_back(b);
            b /= 2;
        }

        sort(v.begin(), v.end());
        sort(u.begin(), u.end());

        int ans = 0;
        for(int i=0; i<v.size(); i++)
            for(int j=0; j<u.size(); j++)
                if(v[i] == u[j]) ans = max(ans, v[i]);

        ans *= 10;

        cout << ans << "\n";
    }
}
