#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        string a, b; cin >> a >> b;

        bool chk = true;

        for(int i=0; i<b.length(); i++) {
            bool flag = false;

            for(int j=0; j<a.length(); j++)
                if(a[j] == b[i]) flag = true;

            if(!flag) chk = false;
        }

        if(chk) cout << "YES\n";
        else cout << "NO\n";
    }
}
