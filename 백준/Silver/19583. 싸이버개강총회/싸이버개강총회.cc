#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b, c; cin >> a >> b >> c;

    map<string, bool> m1, m2;

    string x, y;

    vector<string> v;

    while(cin >> x >> y) {
        if(x <= a) m1[y] = true;
        else if(x >= b && x <= c) m2[y] = true;

        v.push_back(y);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int ans = 0;

    for(int i=0; i<v.size(); i++)
        if(m1[v[i]] && m2[v[i]]) ans++;

    cout << ans << "\n";
}
