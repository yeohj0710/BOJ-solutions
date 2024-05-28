#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XI", "XII"};

    int n; string s; cin >> n >> s;

    for(int i=0; i<v.size(); i++) {
        bool chk = false;

        for(int j=0; j<n; j++) {
            if(j + v[i].length() > s.length()) continue;
            if(s.substr(j, v[i].length()) == v[i]) chk = true;
        }

        if(chk) cout << i+1 << " ";
    }
    cout << "\n";
}
