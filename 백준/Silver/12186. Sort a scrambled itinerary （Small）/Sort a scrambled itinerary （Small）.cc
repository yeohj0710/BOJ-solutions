#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n; cin >> n;

        unordered_map<string, string> mp1, mp2;
        struct s { string a, b; };
        vector<s> v(n);

        for(int i=0; i<n; i++) {
            cin >> v[i].a >> v[i].b;

            mp1[v[i].a] = v[i].b;
            mp2[v[i].b] = v[i].a;
        }

        string s = "";

        for(int i=0; i<n; i++)
            if(mp2[v[i].a] == "") s = v[i].a;

        while(mp1[s] != "") {
            cout << s << "-" << mp1[s] << " ";

            s = mp1[s];
        }
        cout << "\n";
    }
}
