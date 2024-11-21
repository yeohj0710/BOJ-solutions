#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    for(int t=1; ; t++) {
        string a, b; cin >> a;

        if(a == "#") break;

        cin >> b;

        cout << "Party number " << t << "\n";

        vector<string> v;
        unordered_map<string, bool> mpb;

        if(!mpb[a]) v.push_back(a);
        if(!mpb[b]) v.push_back(b);

        mpb[a] = mpb[b] = true;

        unordered_map<string, string> mp;
        mp[a] = b;

        while(true) {
            cin >> a;

            if(a == "#") break;

            cin >> b;

            if(!mpb[a]) v.push_back(a);
            if(!mpb[b]) v.push_back(b);

            mpb[a] = mpb[b] = true;

            mp[a] = b;
        }

        vector<bool> u(v.size());

        for(int i=0; i<u.size(); i++) {
            if(u[i]) continue;

            vector<string> w;
            int x = i;

            while(!u[x]) {
                u[x] = true;
                w.push_back(v[x]);

                string s = mp[v[x]];

                for(int j=0; j<v.size(); j++)
                    if(v[j] == s) x = j;
            }

            for(int j=0; j<w.size(); j++) cout << w[j] << " to ";
            cout << w.front() << ".\n";
        }

        cout << "\n";
    }
}
