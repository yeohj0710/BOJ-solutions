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

    int N, M; cin >> N >> M;

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    vector<int> u(N+1, 1);

    while(M--) {
        int a, b; cin >> a >> b;

        if(f(a) != f(b)) {
            u[f(b)] += u[f(a)];

            v[f(a)] = f(b);
        }
    }

    int x, y, K; cin >> x >> y >> K;

    while(K--) {
        int Max = 0;

        for(int i=1; i<=N; i++) {
            if(f(i) == f(x) || f(i) == f(y)) continue;

            Max = max(Max, u[f(i)]);
        }

        if(Max == 0) continue;

        for(int i=1; i<=N; i++) {
            if(f(i) == f(x) || f(i) == f(y)) continue;

            if(u[f(i)] == Max) {
                u[f(i)] += u[f(x)];

                v[f(x)] = f(i);

                break;
            }
        }
    }

    cout << u[f(x)] << "\n";
}
