#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;
struct s { int a, b, c; };

bool cmp(s x, s y) {
    return x.c < y.c;
}

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        v.clear();
        v.resize(N);
        for(int i=0; i<N; i++) v[i] = i;

        vector<s> u(M);

        for(int i=0; i<M; i++)
            cin >> u[i].a >> u[i].b >> u[i].c;

        sort(u.begin(), u.end(), cmp);

        vector<int> w(N, 1);

        bool flag = false;

        for(int i=0; i<M; i++) {
            int a = u[i].a, b = u[i].b, c = u[i].c;

            if(f(a) != f(b)) {
                w[f(b)] += w[f(a)];

                v[f(a)] = f(b);
            }

            if(w[f(b)] == N) {
                cout << c << "\n";
                flag = true;
                break;
            }
        }

        if(!flag) cout << "IMPOSSIBLE\n";
    }
}
