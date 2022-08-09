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

    int N, M; cin >> N >> M;

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    vector<s> u(M);
    for(int i=0; i<M; i++)
        cin >> u[i].a >> u[i].b >> u[i].c;

    sort(u.begin(), u.end(), cmp);

    int sour, dest; cin >> sour >> dest;

    for(int i=0; i<M; i++) {
        int a = u[i].a, b = u[i].b, c = u[i].c;

        if(f(a) != f(b)) v[f(a)] = f(b);

        if(f(sour) == f(dest)) {
            cout << u[i].c << "\n";
            break;
        }
    }
}
