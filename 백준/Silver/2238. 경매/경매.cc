#include <bits/stdc++.h>
#define int long long
using namespace std;

map<int, int> m;
struct s { string a; int b, c; };

bool cmp(s x, s y) {
    if(m[x.b] != m[y.b]) return m[x.b] < m[y.b];
    else if(x.b != y.b) return x.b < y.b;
    else return x.c < y.c;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<s> v(M);

    for(int i=0; i<M; i++) {
        cin >> v[i].a >> v[i].b;
        v[i].c = i;

        m[v[i].b]++;
    }

    sort(v.begin(), v.end(), cmp);

    cout << v[0].a << " " << v[0].b << "\n";
}
