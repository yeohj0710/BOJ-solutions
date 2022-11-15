#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { char a; int b; };

bool cmp(s x, s y) {
    string c = "BSGPD";

    int p = -1, q = -1;

    for(int i=0; i<c.length(); i++) {
        if(x.a == c[i]) p = i;
        if(y.a == c[i]) q = i;
    }

    if(p != q) return p < q;
    else return x.b > y.b;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<s> v(N);

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        v[i].a = str[0];
        v[i].b = stoll(str.substr(1, str.length()-1));
    }

    vector<s> u(v);

    sort(u.begin(), u.end(), cmp);

    int p = -1, q = -1;

    for(int i=0; i<N; i++) {
        if(v[i].a != u[i].a || v[i].b != u[i].b) {
            if(p == -1) p = i;
            else q = i;
        }
    }

    if(q == -1) cout << "OK\n";
    else {
        cout << "KO\n";
        cout << u[p].a << u[p].b << " " << u[q].a << u[q].b << "\n";
    }
}
