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

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        v.clear();
        v.resize(N+1);
        for(int i=1; i<=N; i++) v[i] = i;

        bool check = true;

        while(M--) {
            int a, b; cin >> a >> b;

            if(f(a) == f(b)) check = false;
            else v[f(a)] = f(b);
        }

        for(int i=1; i<=N; i++)
            if(f(i) != f(1)) check = false;

        if(check) cout << "tree\n";
        else cout << "graph\n";
    }
}
