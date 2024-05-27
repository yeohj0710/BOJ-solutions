#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    struct s { string a; int b; };
    vector<s> v;

    while(n--) {
        string a, b, c; int d, e; cin >> a >> b >> c >> d >> e;

        if(b != "jaehak") continue;

        if(c == "winner") continue;

        if(d != -1 && d <= 3) continue;

        v.push_back({a, e});
    }

    sort(v.begin(), v.end(), [](s x, s y) {
        return x.b < y.b;
    });

    vector<s> u;
    for(int i=0; i<min((int)v.size(), (int)10); i++) u.push_back(v[i]);

    sort(u.begin(), u.end(), [](s x, s y) {
         return x.a < y.a;
    });

    cout << u.size() << "\n";

    for(int i=0; i<u.size(); i++) cout << u[i].a << "\n";
}
