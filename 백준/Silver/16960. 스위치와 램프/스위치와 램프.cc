#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N+1);
    for(int i=1; i<=N; i++) {
        int K; cin >> K;

        while(K--) {
            int x; cin >> x;

            v[i].push_back(x);
        }
    }

    bool ans = false;
    for(int i=1; i<=N; i++) {
        vector<bool> u(M+1);

        for(int j=1; j<=N; j++) {
            if(j == i) continue;

            for(int k=0; k<v[j].size(); k++) u[v[j][k]] = true;
        }

        bool check = true;
        for(int i=1; i<=M; i++)
            if(!u[i]) check = false;

        if(check) ans = true;
    }

    if(ans) cout << 1 << "\n";
    else cout << 0 << "\n";
}
