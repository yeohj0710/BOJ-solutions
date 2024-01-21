#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N, M; cin >> N >> M;

        if(N == 0 && M == 0) break;

        vector<int> v(M);
        for(int i=0; i<M; i++) cin >> v[i];

        vector<bool> u(N+1);

        for(int i=0; i<M; i++)
            for(int j=0; j<M; j++) u[abs(v[i] - v[j])] = true;

        bool chk = true;

        for(int i=0; i<u.size(); i++)
            if(!u[i]) chk = false;

        if(chk) cout << "Y\n";
        else cout << "N\n";
    }
}
