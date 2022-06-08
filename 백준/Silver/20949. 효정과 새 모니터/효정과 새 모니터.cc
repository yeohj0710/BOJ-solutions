#include <bits/stdc++.h>
#define int long long
using namespace std;

struct S { int n, w, h; };

bool cmp(S &a, S &b) {
    int x = a.w*a.w + a.h*a.h;
    int y = b.w*b.w + b.h*b.h;

    if(x != y) return x > y;
    else return a.n < b.n;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<S> v(N);
    for(int i=0; i<N; i++) {
        v[i].n = i+1;
        cin >> v[i].w >> v[i].h;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<N; i++) cout << v[i].n << "\n";
}
