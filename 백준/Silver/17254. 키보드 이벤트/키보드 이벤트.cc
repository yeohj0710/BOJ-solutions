#include <bits/stdc++.h>
#define int long long
using namespace std;

struct S {
    int a, b;
    char c;
};

bool cmp(S &x, S &y) {
    if(x.b != y.b) return x.b < y.b;
    else return x.a < y.a;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<S> v(M);
    for(int i=0; i<M; i++) cin >> v[i].a >> v[i].b >> v[i].c;

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<M; i++) cout << v[i].c;
    cout << "\n";
}
