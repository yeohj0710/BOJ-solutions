#include <bits/stdc++.h>
#define int long long
using namespace std;

struct S { int n, a, b; };

bool cmp1(S x, S y) {
    return x.a > y.a;
}

bool cmp2(S x, S y) {
    return x.b > y.b;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<S> v(N);
    for(int i=0; i<N; i++) {
        v[i].n = i+1;
        cin >> v[i].a >> v[i].b;
    }

    sort(v.begin(), v.end(), cmp1);

    vector<S> u;
    for(int i=0; i<M; i++) u.push_back(v[i]);

    sort(u.begin(), u.end(), cmp2);

    cout << u[0].n << "\n";
}
