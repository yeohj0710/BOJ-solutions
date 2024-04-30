#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<bool> v(3);

    for(int i=0; i<3; i++) {
        string s; cin >> s;

        if(s[0] == 'l') v[0] = true;
        else if(s[0] == 'k') v[1] = true;
        else if(s[0] == 'p') v[2] = true;
    }

    if(v[0] && v[1] && v[2]) cout << "GLOBAL\n";
    else cout << "PONIX\n";
}
