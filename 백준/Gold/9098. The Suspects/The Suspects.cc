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

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        v.clear();
        v.resize(N);
        for(int i=0; i<N; i++) v[i] = i;

        while(M--) {
            int K; cin >> K;

            vector<int> u(K);
            for(int i=0; i<K; i++) cin >> u[i];

            for(int i=0; i<K; i++)
                if(f(u[i]) != f(u[0])) v[f(u[i])] = f(u[0]);
        }

        int ans = 0;

        for(int i=0; i<N; i++)
            if(f(i) == f(0)) ans++;

        cout << ans << "\n";
    }
}
