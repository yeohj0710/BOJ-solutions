#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(M+1), u(M+1);

    for(int i=1; i<=N; i++) {
        int a, b; cin >> a >> b;

        v[b].push_back(i);
        u[b].push_back(a);
    }

    bool chk = true;

    for(int i=1; i<=M; i++) {
        sort(v[i].begin(), v[i].end());
        sort(u[i].begin(), u[i].end());

        if(v[i] != u[i]) chk = false;
    }

    if(chk) cout << "Y\n";
    else cout << "N\n";
}
