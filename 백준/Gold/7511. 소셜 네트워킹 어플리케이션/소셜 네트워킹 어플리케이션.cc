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

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> N >> M;

        v.resize(N);
        for(int i=0; i<N; i++) v[i] = i;

        while(M--) {
            int a, b; cin >> a >> b;

            if(f(a) != f(b)) v[f(a)] = f(b);
        }

        int K; cin >> K;

        cout << "Scenario " << t << ":\n";

        while(K--) {
            int a, b; cin >> a >> b;

            if(f(a) == f(b)) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        cout << "\n";
    }
}
