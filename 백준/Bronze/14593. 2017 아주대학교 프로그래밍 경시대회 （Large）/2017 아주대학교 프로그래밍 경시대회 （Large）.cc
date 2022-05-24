#include <bits/stdc++.h>
#define int long long
using namespace std;

struct S { int n, a, b, c; };

bool cmp(S &x, S &y) {
    if(x.a != y.a) return x.a > y.a;
    else if(x.b != y.b) return x.b < y.b;
    else if(x.c != y.c) return x.c < y.c;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<S> v(N);

    for(int i=0; i<N; i++) {
        v[i].n = i+1;

        cin >> v[i].a >> v[i].b >> v[i].c;
    }

    sort(v.begin(), v.end(), cmp);

    cout << v[0].n << "\n";
}
