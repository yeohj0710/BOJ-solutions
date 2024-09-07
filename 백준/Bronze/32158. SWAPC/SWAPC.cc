#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    string s; cin >> s;

    vector<int> v, u;

    for(int i=0; i<n; i++) {
        if(s[i] == 'P') v.push_back(i);
        else if(s[i] == 'C') u.push_back(i);
    }

    for(int i=0; i<min(v.size(), u.size()); i++)
        swap(s[v[i]], s[u[i]]);

    cout << s << "\n";
}
