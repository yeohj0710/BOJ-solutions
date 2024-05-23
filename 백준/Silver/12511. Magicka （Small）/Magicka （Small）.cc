#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n; cin >> n;

        vector<string> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        int m; cin >> m;

        vector<string> u(m);
        for(int i=0; i<m; i++) cin >> u[i];

        int kk; cin >> kk;

        string s; cin >> s;

        vector<char> w;

        for(int i=0; i<kk; i++) {
            w.push_back(s[i]);

            bool flag = false;

            while(w.size() >= 2) {
                char b = w.back(); w.pop_back();
                char a = w.back();

                bool chk = false;

                for(int j=0; j<n; j++)
                    if((v[j][0] == a && v[j][1] == b) || (v[j][0] == b && v[j][1] == a)) {
                        w.pop_back();
                        w.push_back(v[j][2]);

                        chk = true;
                        flag = true;
                        break;
                    }

                if(!chk) {
                    w.push_back(b);
                    break;
                }
            }

            if(flag) continue;

            for(int j=0; j<u.size(); j++)
                for(int k=0; k<w.size(); k++) {
                    if((u[j][0] == w[k] && u[j][1] == w.back()) || (u[j][0] == w.back() && u[j][1] == w[k])) {
                        w.clear();
                    }
                }
        }

        cout << "[";

        for(int i=0; i<w.size(); i++) {
            cout << w[i];

            if(i != w.size()-1) cout << ", ";
        }

        cout << "]\n";
    }
}
