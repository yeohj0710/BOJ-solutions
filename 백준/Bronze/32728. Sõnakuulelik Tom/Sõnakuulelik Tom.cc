#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    string s; cin >> s;

    vector<string> v(3);

    for(int i=0; i<n; i++) {
        int x = 0;

        if(s[i] == 's') x = 0;
        else if(s[i] == 'r') x = 1;
        else x = 2;

        while(v[x].length() >= m) x = (x + 1) % 3;

        v[x] += s[i];
    }

    for(int i=0; i<3; i++) cout << v[i] << "\n";
}
