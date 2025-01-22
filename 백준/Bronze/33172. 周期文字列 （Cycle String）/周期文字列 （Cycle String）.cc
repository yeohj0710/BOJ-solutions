#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    string s; cin >> s;

    for(int i=1; i<n; i++) {
        if(n % i != 0) continue;

        bool chk = true;

        for(int j=0; j<n; j+=i)
            if(s.substr(0, i) != s.substr(j, i)) {
                chk = false;
                break;
            }

        if(chk) {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
}
