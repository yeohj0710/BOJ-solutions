#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x; string str, name; };

bool cmp1(s &a, s &b) {
    return a.str < b.str;
}

bool cmp2(s &a, s &b) {
    return a.x > b.x;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<s> v(3);
    for(int i=0; i<3; i++) {
        cin >> v[i].x >> v[i].str >> v[i].name;
        v[i].str = v[i].str.substr(2, 2);
    }

    sort(v.begin(), v.end(), cmp1);

    cout << v[0].str << v[1].str << v[2].str << "\n";

    sort(v.begin(), v.end(), cmp2);

    cout << v[0].name[0] << v[1].name[0] << v[2].name[0] << "\n";
}
