#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

int f(int x) {
    if(x == v[x]) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    while(M--) {
        int a, b; cin >> a >> b;

        if(f(a) != f(b)) v[f(a)] = f(b);
    }

    while(K--) {
        int a, b; cin >> a >> b;

        if(f(a) == f(b)) cout << "Y\n";
        else cout << "N\n";
    }
}
