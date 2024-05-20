#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; string s; cin >> n >> s;

    int m; cin >> m;

    while(m--) {
        int a, b; cin >> a >> b;

        string ss = s.substr(a-1, b-a+1);

        int ans = 0;

        for(int i=1; i<ss.length(); i++) {
            int cnt = 0;

            for(int j=0; i-1-j>=0 && i+j<ss.length(); j++)
                if(ss[i-1-j] == ss[i+j]) cnt++;

            ans = max(ans, cnt);
        }

        cout << ans << "\n";
    }
}
