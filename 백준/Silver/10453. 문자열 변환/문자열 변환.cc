#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        vector<int> v, u;

        for(int i=0; i<a.length(); i++)
            if(a[i] == 'b') v.push_back(i);

        for(int i=0; i<b.length(); i++)
            if(b[i] == 'b') u.push_back(i);

        int ans = 0;

        for(int i=0; i<v.size(); i++)
            ans += abs(v[i] - u[i]);

        cout << ans << "\n";
    }
}
