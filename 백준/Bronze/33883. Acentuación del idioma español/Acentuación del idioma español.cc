#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    vector<int> v;

    for(int i=0; i<s.length(); i++)
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            v.push_back(i + 1);
        }

    if(s.back() == 'a' || s.back() == 'e' || s.back() == 'i' || s.back() == 'o' || s.back() == 'u' || s.back() == 'n' || s.back() == 's') {
        if(v.size() < 2) {
            cout << -1 << "\n";
            return 0;
        }

        cout << v[v.size() - 2] << "\n";
    }
    else {
        if(v.size() < 1) cout << -1 << "\n";
        else cout << v.back() << "\n";
    }
}
