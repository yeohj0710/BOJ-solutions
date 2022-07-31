#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj1, adj2;
vector<bool> v, u;

void f(int x) {
    v[x] = true;

    for(int i=0; i<adj1[x].size(); i++) {
        int y = adj1[x][i];

        if(!v[y]) f(y);
    }
}

void g(int x) {
    u[x] = true;

    for(int i=0; i<adj2[x].size(); i++) {
        int y = adj2[x][i];

        if(!u[y]) g(y);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    adj1.resize(N+1);
    adj2.resize(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj1[a].push_back(b);
        adj2[b].push_back(a);
    }

    v.resize(N+1);

    f(1);

    u.resize(N+1);

    g(N);

    int K; cin >> K;

    while(K--) {
        int x; cin >> x;

        if(v[x] && u[x]) cout << "Defend the CTP\n";
        else cout << "Destroyed the CTP\n";
    }
}
