#include <bits/stdc++.h>
#define int long long
using namespace std;

string a, b;
struct s { string a; int b; };

void f(vector<s> v, int x, int y) {
    for(int i=0; i<v.size(); i++) {
        if(v[i].a == a) v[i].b += x;
        if(v[i].a == b) v[i].b += y;
    }

    sort(v.begin(), v.end(), [](s sa, s sb) {
        if(sa.b != sb.b) return sa.b > sb.b;

        return sa.a < sb.a;
    });

    for(int i=0; i<v.size(); i++)
        if(v[i].a == a) cout << i + 1 << " ";
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    cin >> a >> b;

    vector<s> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i].a >> v[i].b;

    f(v, 3, 0);
    f(v, 1, 1);
    f(v, 0, 3);
}
