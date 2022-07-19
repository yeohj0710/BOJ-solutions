#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int n, a, b, c; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<s> v(N);
    int idx;

    for(int i=0; i<N; i++) {
        cin >> v[i].n >> v[i].a >> v[i].b >> v[i].c;

        if(v[i].n == M) idx = i;
    }

    int ans = 1;
    for(int i=0; i<N; i++) {
        if(v[i].a > v[idx].a) ans++;
        else if(v[i].a == v[idx].a && v[i].b > v[idx].b) ans++;
        else if(v[i].a == v[idx].a && v[i].b == v[idx].b && v[i].c > v[idx].c) ans++;
    }

    cout << ans << "\n";
}
