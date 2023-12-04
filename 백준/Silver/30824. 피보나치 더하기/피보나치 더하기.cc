#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v = {1, 1};

    while(true) {
        int a = v[v.size() - 2], b = v[v.size() - 1];

        if(a + b > 1e16) break;

        v.push_back(a + b);
    }

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        bool chk = false;

        if(a == 1) {
            for(int i=0; i<v.size(); i++)
                if(v[i] == b) chk = true;
        }
        else if(a == 2) {
            for(int i=0; i<v.size(); i++)
                for(int j=0; j<v.size(); j++)
                    if(v[i] + v[j] == b) chk = true;
        }
        else {
            for(int i=0; i<v.size(); i++)
                for(int j=0; j<v.size(); j++)
                    for(int k=0; k<v.size(); k++)
                        if(v[i] + v[j] + v[k] == b) chk = true;
        }

        if(chk) cout << "YES\n";
        else cout << "NO\n";
    }
}
