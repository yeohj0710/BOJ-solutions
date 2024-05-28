#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(15);

    int n; cin >> n;

    while(n--) {
        string s; cin >> s;

        v[(s[0] - '1') * 3 + (s[1] - 'A')]++;
    }

    bool chk = true;

    for(int i=0; i<12; i++)
        if(v[i] < 1) chk = false;

    for(int i=12; i<15; i++)
        if(v[i] < 2) chk = false;

    if(chk) cout << "TAK\n";
    else cout << "NIE\n";
}
