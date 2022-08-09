#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;
struct s { int a, b, c; };

bool cmp(s x, s y) {
    return x.c > y.c;
}

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> N >> M;

        v.clear();
        v.resize(N+1);
        for(int i=1; i<=N; i++) v[i] = i;

        vector<s> u(M);
        for(int i=0; i<M; i++)
            cin >> u[i].a >> u[i].b >> u[i].c;

        sort(u.begin(), u.end(), cmp);

        for(int i=0; i<M; i++) {
            int a = u[i].a, b = u[i].b, c = u[i].c;

            if(f(a) != f(b)) v[f(a)] = f(b);

            if(f(1) == f(N)) {
                cout << "Scenario #" << t << ":\n";
                cout << c << "\n\n";
                break;
            }
        }
    }
}
