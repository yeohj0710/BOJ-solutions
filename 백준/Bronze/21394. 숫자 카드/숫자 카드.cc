#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        vector<int> v(10);

        for(int i=1; i<=9; i++) cin >> v[i];

        v[9] += v[6];
        v[6] = 0;

        vector<int> u;

        for(int i=1; i<=9; i++)
            for(int j=0; j<v[i]; j++) u.push_back(i);

        string ans = "";

        if(u.size() % 2 == 0) {
            for(int i=0; i<u.size(); i++) {
                if(i % 2 == 0) ans += ('0' + u[i]);
                else ans = char('0' + u[i]) + ans;
            }
        }
        else {
            for(int i=0; i<u.size(); i++) {
                if(i % 2 == 0) ans = char('0' + u[i]) + ans;
                else ans += ('0' + u[i]);
            }
        }

        for(int i=0; i<ans.length(); i++) cout << ans[i] << " ";
        cout << "\n";
    }
}
