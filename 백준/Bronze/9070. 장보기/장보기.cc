#include <bits/stdc++.h>
#define int long long
using namespace std;

struct S { double a, b; };

bool cmp(S &x, S &y) {
    if(x.a/x.b != y.a/y.b) return x.a/x.b > y.a/y.b;
    else return x.b < y.b;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<S> v(N);
        for(int i=0; i<N; i++) cin >> v[i].a >> v[i].b;

        sort(v.begin(), v.end(), cmp);

        cout << v[0].b << "\n";
    }
}

