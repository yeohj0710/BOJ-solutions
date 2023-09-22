#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    for(int i=a; i<=b; i++) {
        string str = to_string(i);

        vector<int> v(10);

        for(int j=0; j<str.length(); j++) v[str[j] - '0']++;

        bool chk = true;

        for(int j=0; j<10; j++)
            if(v[j] >= 2) chk = false;

        if(chk) {
            cout << i << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}
