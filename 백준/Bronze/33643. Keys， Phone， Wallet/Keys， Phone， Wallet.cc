#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<bool> v(3);

    while(n--) {
        string s; cin >> s;

        if(s == "keys") v[0] = true;
        else if(s == "phone") v[1] = true;
        else if(s == "wallet") v[2] = true;
    }

    if(v[0] && v[1] && v[2]) {
        cout << "ready\n";
        return 0;
    }

    if(!v[0]) cout << "keys\n";
    if(!v[1]) cout << "phone\n";
    if(!v[2]) cout << "wallet\n";
}
