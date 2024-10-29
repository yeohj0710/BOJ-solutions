#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    n++;

    vector<string> v;
    string x;

    while(n--) {
        string a, b; cin >> a >> b;

        if(b == "student") v.push_back(a);
        else x = a;
    }

    string y; cin >> y;

    int ans = 0;

    for(int i=0; i<v.size(); i++)
        if(v[i] >= x && v[i] >= y) ans++;

    cout << ans << "\n";
}
