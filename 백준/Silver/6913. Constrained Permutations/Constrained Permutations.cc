#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> N >> M;

    vector<pair<int, int>> v(M);
    for(int i=0; i<M; i++) cin >> v[i].first >> v[i].second;

    vector<int> u(N+1);
    for(int i=1; i<=N; i++) u[i] = i;

    int ans = 0;

    while(true) {
        bool check = true;

        for(int i=0; i<M; i++)
            if(u[v[i].first] > u[v[i].second]) check = false;

        if(check) ans++;

        if(!next_permutation(u.begin()+1, u.end())) break;
    }

    cout << ans << "\n";
}
