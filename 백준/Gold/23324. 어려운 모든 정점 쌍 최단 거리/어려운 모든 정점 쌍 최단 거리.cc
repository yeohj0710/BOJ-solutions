#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    int x, y;

    for(int i=1; i<=M; i++) {
        int a, b; cin >> a >> b;

        if(i == K) {
            x = a;
            y = b;

            continue;
        }

        if(f(a) != f(b)) v[f(a)] = f(b);
    }

    if(f(x) == f(y)) {
        cout << 0 << "\n";
        return 0;
    }

    int cntx = 0, cnty = 0;

    for(int i=1; i<=N; i++) {
        if(v[f(i)] == v[f(x)]) cntx++;
        else if(v[f(i)] == v[f(y)]) cnty++;
    }

    int ans = cntx * cnty;

    cout << ans << "\n";
}
