#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { string a; double b, c; };

bool cmp(s &x, s &y) {
    if(x.b * x.c != y.b * y.c) return x.b * x.c > y.b * y.c;
    else if(x.b != y.b) return x.b > y.b;
    else return x.a < y.a;
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(2);

    vector<s> v;
    string a; double b, c;

    while(cin >> a >> b >> c) v.push_back({a, b, c});

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<v.size(); i++)
        cout << "$" << v[i].b * v[i].c << " - " << v[i].a << "/" << (int)v[i].b << "\n";
}
