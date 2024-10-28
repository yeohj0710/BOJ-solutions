#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<string> v(n);

    for(int i=0; i<n; i++) {
        string s; cin >> s;

        if(s.find("rest") != -1) v[i] = "😎";
        else if(s.find("leg") != -1) v[i] = "🦵";
        else v[i] = "💪";
    }

    for(int i=0; i<31; i++) {
        if(i % 7 == 0) cout << i / 7 + 1 << " ";

        cout << v[i % v.size()];

        if(i % 7 == 6) cout << "\n";
    }
}
