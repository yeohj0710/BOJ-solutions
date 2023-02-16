#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { string str; int a, b, c; };

bool cmp(s x, s y) {
    if(x.a != y.a) return x.a > y.a;
    else if(x.b != y.b) return x.b > y.b;
    else if(x.c != y.c) return x.c > y.c;
    else return x.str < y.str;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<s> v;

    string str; int a, b, c;

    while(cin >> str >> a >> b >> c) v.push_back({str, a, b, c});

    sort(v.begin(), v.end(), cmp);

    int ran;

    for(int i=0; i<v.size(); i++) {
        if(!(i > 0 && v[i].a == v[i-1].a && v[i].b == v[i-1].b && v[i].c == v[i-1].c)) ran = i + 1;

        cout << ran << " " << v[i].str << " "
              << v[i].a << " " << v[i].b << " " << v[i].c
              << " " << v[i].a + v[i].b + v[i].c << "\n";
    }
}
